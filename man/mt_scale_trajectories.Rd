% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/standardize.R
\name{mt_scale_trajectories}
\alias{mt_scale_trajectories}
\title{Standardize variables in mouse trajectory array.}
\usage{
mt_scale_trajectories(
  data,
  use = "trajectories",
  save_as = use,
  var_names,
  center = TRUE,
  scale = TRUE,
  within_trajectory = FALSE,
  prefix = "z_",
  transform = NULL
)
}
\arguments{
\item{data}{a mousetrap data object created using one of the mt_import
functions (see \link{mt_example} for details). Alternatively, a trajectory
array can be provided directly (in this case \code{use} will be ignored).}

\item{use}{a character string specifying which trajectory data should be
used.}

\item{save_as}{a character string specifying where the resulting trajectory
data should be stored.}

\item{var_names}{character vector giving the labels of the to be
standardized variables.}

\item{center}{logical specifying whether variables should be centered (i.e.,
\code{mean = 0}). Can be a logical vector, in which case the values of
\code{scale} are mapped to the variables specified in \code{var_names}.}

\item{scale}{logical or numeric specifying the scaling of the variables. When
logical, \code{scale = TRUE} normalizes the trajectory variable to sd = 1,
whereas \code{scale = FALSE} leaves the variable on its original scale. When
numeric, the trajectory variables are scaled by (i.e., divided by) the
specific value in scale. Can also be a numeric vector, in which case the
values of \code{scale} are mapped to the variables specified in
\code{var_names}.}

\item{within_trajectory}{logical specifying whether trajectory variables
should be scaled within or across trajectories. If \code{within_trajectory
  == TRUE}, scaling trajectories to mean = 0 and sd = 1 means that every to
be standardized trajectory variable will have mean = 0 and sd = 1. If
\code{within_trajectory == FALSE} (the default), mean = 0 and sd = 1 are
only true in the aggregate (i.e., across all trajectories). Can be a
logical vector, in which case the values of \code{scale} are mapped to the
variables specified in \code{var_names}.}

\item{prefix}{character string added to the names of the new standardized
variables. If \code{prefix = ""}, the original variables will be
overwritten.}

\item{transform}{function that takes a numeric matrix as argument and returns
a numeric matrix of same size with transformed values. If \code{NULL} the
original values are passed on to standardization.}
}
\value{
A mousetrap data object (see \link{mt_example}) with an additional
variable containing the standardized trajectory variable added to the
trajectory array). If the trajectory array was provided directly as
\code{data}, only the trajectory array will be returned.
}
\description{
\code{mt_scale_trajectories} centers and / or standardizes selected
trajectory variables within or across trajectories.
}
\examples{
# Calculate derivatives
mt_example <- mt_derivatives(mt_example)

# Standardize velocity across trajectories
mt_example <- mt_scale_trajectories(mt_example,var_names = "vel")

}
\seealso{
\link{mt_standardize} for standardizing mouse-tracking measures per level of
other variables.
}
\author{
Dirk U. Wulff
}
