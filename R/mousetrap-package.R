#' Process and analyze mouse-tracking data
#' 
#' The mousetrap package provides functions for importing, preprocessing, 
#' analyzing, aggregating, and visualizing mouse-tracking data. In the 
#' following, a brief overview of the functions in this package is given.
#' 
#' @section Read functions:
#'   
#'   Depending on the file format, one of the standard R functions for reading 
#'   files into R can be used (e.g., \link[utils]{read.table} or 
#'   \link[utils:read.table]{read.csv}).
#'
#'   If raw data were collected using
#'   \href{http://www.mousetracker.org/}{MouseTracker}, the mousetrap package 
#'   provides the \link{read_mt} function to read files in the ".mt" format.
#'
#'   If several raw data files should be read and merged, the 
#'   \link[readbulk]{read_bulk} function from the 
#'   \href{http://pascalkieslich.github.io/readbulk/}{readbulk} package can be
#'   used (or the \link[readbulk]{read_opensesame} function, if data were 
#'   collected using \href{https://osdoc.cogsci.nl/}{OpenSesame}).
#'   
#' @section Import functions:
#'
#'   The initial step to prepare data for analysis in the mousetrap package is
#'   to create a mousetrap data object. Depending on the input format, one of
#'   the following functions can be used. A detailed description (and example)
#'   of the resulting mousetrap data object can be found in \link{mt_example}.
#'
#'   \link{mt_import_mousetrap} imports mouse-tracking data that were recorded 
#'   using the \href{https://github.com/pascalkieslich/mousetrap-os}{mousetrap
#'   plugin} for \href{https://osdoc.cogsci.nl/}{OpenSesame}.
#'
#'   \link{mt_import_wide} imports mouse-tracking data saved in a wide format 
#'   (e.g., data collected using
#'   \href{http://www.mousetracker.org/}{MouseTracker}).
#'
#'   \link{mt_import_long} imports mouse-tracking data saved in a long format. 
#'   (e.g., trajectories exported using \link{mt_export_long}).
#'   
#' @section Geometric preprocessing functions:
#' 
#'   A number of functions are available that perform geometric preprocessing 
#'   operations.
#' 
#'   \link{mt_remap_symmetric} remaps mouse trajectories to one side (or one
#'   quadrant) of the coordinate system.
#'
#'   \link{mt_align} is a general purpose function for aligning and rescaling 
#'   trajectories. For specific operations, you can rely on one of the
#'   following functions.
#'
#'   \link{mt_align_start} aligns the start position of trajectories.
#'
#'   \link{mt_align_start_end} aligns all trajectories so that they share a 
#'   common initial and final coordinate (this is also sometimes referred to as 
#'   "space-normalization").
#'   
#' @section Resampling and interpolation functions:
#'   
#'   A number of functions are available that perform resampling and 
#'   interpolation operations.
#'
#'   \link{mt_exclude_initiation}	excludes the initial phase of a trial without 
#'   mouse movement.
#'
#'   \link{mt_exclude_finish}	excludes a potential phase without mouse movement at the end of a trial.
#'
#'   \link{mt_time_normalize}	performs time-normalization using equidistant time
#'   intervals, resulting in an identical number of samples for all 
#'   trajectories.
#'
#'   \link{mt_resample}	resamples trajectories so that samples occur at constant
#'   intervals of a specified length.
#'
#'   \link{mt_average} averages trajectory coordinates (and related variables)
#'   for time bins of constant duration.
#'
#'   \link{mt_length_normalize} re-represents each trajectory spatially so that
#'   adjacent points on the trajectory become equidistant to each other.
#'   
#' @section Data handling functions:
#'   
#'   A number of functions are available for data handling operations, such as
#'   filtering or adding of new variables or trajectories.
#'
#'   \link{mt_subset}	filters mouse-tracking data by trials, so that only those 
#'   meeting the defined criteria are included.
#'
#'   \link{mt_add_variables} adds new, self created variables to a trajectory 
#'   array.
#'
#'   \link{mt_add_trajectory} adds a new trajectory to a trajectory array.
#'
#'   \link{mt_bind} joins two trajectory arrays.
#'   
#' @section Analysis functions:
#'   
#'   A number of different analysis procedures and summary statistics for mouse 
#'   trajectories have been established in the existing literature. The following 
#'   functions implement many of these approaches.
#'
#'   \link{mt_derivatives} calculates distance, velocity, and 
#'   acceleration for trajectories.
#'
#'   \link{mt_angles} calculates movement angles for trajectories.
#'
#'   \link{mt_deviations} calculates the deviations from an idealized
#'   trajectory (straight line).
#'
#'   \link{mt_measures}	calculates a set of mouse-tracking measures.
#'
#'   \link{mt_sample_entropy}	calculates sample entropy.
#'
#'   \link{mt_standardize} standardizes mouse-tracking measures onto a common 
#'   scale (separately for subsets of the data, e.g., per participant).
#'
#'   \link{mt_scale_trajectories} provides different options for standardizing
#'   variables in a mouse trajectory array.
#'
#'   \link{mt_check_bimodality}	assesses the bimodality of mouse-tracking
#'   measure distributions.
#'
#'   \link{mt_check_resolution}	checks the (temporal) logging resolution of raw
#'   trajectories.
#'
#'   \link{mt_count} counts the number of observations for each trajectory.
#'   
#' @section Cluster functions:
#'   
#'   A number of different functions for clustering trajectories is provided.
#'
#'   \link{mt_distmat} computes the dissimilarity/distance between each pair of 
#'   trajectories.
#'
#'   \link{mt_cluster} performs trajectory clustering with a specified number of
#'   clusters.
#'
#'   \link{mt_cluster_k} estimates the optimal number of clusters using various 
#'   methods.
#'
#'   \link{mt_map} maps trajectories onto a predefined set of prototype 
#'   trajectories (a core set is provided in \link{mt_prototypes}).
#'   
#' @section Reshaping, aggregation, and export functions:
#'   
#'   A number of helper functions are provided for aggregating, plotting, and 
#'   exporting the multi-dimensional mouse trajectory arrays.
#'
#'   \link{mt_reshape} is a general purpose reshaping and aggregation function
#'   for mousetrap data.
#'
#'   \link{mt_aggregate} aggregates mouse-tracking data per condition.
#'
#'   \link{mt_aggregate_per_subject}	aggregates mouse-tracking data per 
#'   (within subjects-) condition separately for each subject.
#'
#'   \link{mt_export_long} exports mouse-tracking data in long format.
#'
#'   \link{mt_export_wide} exports mouse-tracking data in wide format.
#'   
#' @section Visualization functions:
#'   
#'   The following functions can be used for plotting trajectory data, e.g., 
#'   individual and aggregated trajectories or velocity profiles.
#'
#'   \link{mt_plot}	plots individual trajectory data.
#'
#'   \link{mt_plot_aggregate}	plots aggregated trajectory data.
#'
#'   \link{mt_plot_add_rect} adds rectangles to a trajectory plot.
#'
#'   \link{mt_plot_riverbed} plots the relative frequency of a selected variable
#'   across time.
#'
#'   \link{mt_plot_per_trajectory} creates a pdf with separate plots per 
#'   trajectory.
#'
#'   \link{mt_heatmap} and \link{mt_heatmap_ggplot} plot trajectory heatmaps.
#'
#'   \link{mt_diffmap} for creating a difference-heatmap of two trajectory 
#'   heatmap images.
#'
#'   \link{mt_animate} creates a gif trajectory animation.
#'   
#' @section Helper functions:
#'   
#'   \link{bimodality_coefficient} calculates the bimodality coefficient.
#'
#'   \link{scale_within} scales and centers variables within the levels of 
#'   another variable.
#'
#'   \link{bezier} creates Bezier-curves using the Bernstein approximation.
#'   
#' @section Datasets:
#'   
#'   \link{mt_example} and \link{mt_example_raw} contain a mouse-tracking
#'   example dataset for demonstrations using the \code{mousetrap} package.
#'
#'   \link{KH2017} and \link{KH2017_raw} contain a mouse-tracking dataset from
#'   Kieslich & Henninger (2017).
#'
#' @examples
#' \dontrun{
#' KH2017 <- mt_import_mousetrap(subset(KH2017_raw,correct==1))
#' KH2017 <- mt_remap_symmetric(KH2017)
#' KH2017 <- mt_align_start(KH2017)
#' }
#' 
#' KH2017 <- mt_time_normalize(KH2017)
#' KH2017 <- mt_measures(KH2017)
#' 
#' mt_aggregate(
#'   KH2017, use="measures",
#'   use_variables=c("MAD", "AD"),
#'   use2_variables="Condition",
#'   subject_id="subject_nr"
#' )
#' 
#' mt_plot_aggregate(KH2017,
#'   use="tn_trajectories",
#'   x="xpos", y="ypos", color="Condition",
#'   subject_id="subject_nr"
#' )
#' 
#' \dontrun{
#' mt_plot(KH2017,
#'   use="tn_trajectories",
#'   x="xpos", y="ypos", color="Condition"
#' )
#' }
#' @keywords internal
"_PACKAGE"

## usethis namespace: start
## usethis namespace: end
NULL
