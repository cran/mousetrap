% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/animate.R
\name{mt_animate}
\alias{mt_animate}
\title{Create gif trajectory animation.}
\usage{
mt_animate(
  data,
  use = "trajectories",
  dimensions = c("xpos", "ypos"),
  timestamps = "timestamps",
  filename = "trajectory_animation.gif",
  xres = 1000,
  seconds = 3,
  framerate = 24,
  speed = 0.5,
  density = 3,
  jitter = TRUE,
  remove = FALSE,
  bg = "black",
  col = "white",
  lwd = 1,
  loop = FALSE,
  bounds = NULL,
  norm = FALSE,
  upscale = 1,
  decay = 10,
  max_intensity = 5,
  discard_images = TRUE,
  im_path = NULL,
  parallel = TRUE,
  verbose = FALSE
)
}
\arguments{
\item{data}{a mousetrap data object created using one of the mt_import
functions (see \link{mt_example} for details). Alternatively, a trajectory
array can be provided directly (in this case \code{use} will be ignored).}

\item{use}{a character string specifying which trajectory data should be
used.}

\item{dimensions}{a character vector specifying the two dimensions in the
trajectory array that contain the mouse positions. Usually (and by
default), the first value in the vector corresponds to the x-positions
(\code{xpos}) and the second to the y-positions (\code{ypos}).}

\item{timestamps}{a character string specifying the trajectory dimension
containing the timestamps. If \code{NULL} linearly increasing timestamps
are assumed, producing a perfectly constant timestamp interval.}

\item{filename}{character string specifying the path and filename of the
resulting \emph{.gif}. If the extension of \code{filename} is not
\emph{.gif}, \emph{.gif} is added at the end. Must not contain spaces.}

\item{xres}{numeric specifying the resolution of the \emph{.gif} file.}

\item{seconds}{numeric specifying the duration of the \emph{.gif} file.}

\item{framerate}{numeric specifying the framerate of the \emph{.gif} file.
Defaults to 24 implying smooth non-discrete frame transitions for the human
eye.}

\item{speed}{numeric specifying the speed of the trajectories with regard to
their original velocity profile. I.e., a value of .5 shows trajectories in
half of the original velocities, whereas a value of 2 shows trajectories in
double of the original velocities.}

\item{density}{integer specifying the number of trajectories to be added
each frame. I.e., if \code{density = 10}, \code{seconds = 10},
\code{framerate = 24} and \code{speed = .5} then the animation will show 10
x 10 x 24 x .5 = 1200 trajectories.}

\item{jitter}{logical specifying whether the density should be jittered. If
\code{TRUE}, \code{density} varies according to
\link[stats:Geometric]{rgeom} (\code{1/density}).}

\item{remove}{logical specifying whether trajectories that reached their end
points should be removed from the rest of the animation. Defaults to
\code{FALSE} implying that all finished trajectories remain visible.}

\item{bg}{character string specifying the background color.}

\item{col}{character string specifying the foreground color, i.e., the color
used to draw the trajectories.}

\item{lwd}{numeric specifying the line width of the trajectories.}

\item{loop}{logical specifying whether gif should be looped. If \code{FALSE}
(the default), the last frame will remain visible after the animation is
finished. If \code{TRUE}, the gif will infinitely repeat itself.}

\item{bounds}{numeric vector specifying the xleft, xright, ybottom, and ytop
limits of the animation canvas. Defaults to \code{NULL} in which case the
animation canvas is set to include all existing trajectory points,
irrespective of how extreme they may be.}

\item{norm}{logical specifying whether the trajectories should be remapped to
the \emph{mt-space}. See \link{mt_align}. Note that aligning often requires
that that all trajectories are flipped to one side first (see
\link{mt_remap_symmetric}).}

\item{upscale}{numeric specifying a scaling factor for the animation
resolution. E.g, \code{upscale = 2} implies that the x-resolution in
\emph{.gif} file is \code{2*xres}.}

\item{decay}{numeric defining a within-trajectory gradient of color intensity.
Specifically, values larger than 1 will give more recent movements higher
color intensities than movements that lie longer in the past, and vice
versa.}

\item{max_intensity}{numeric specifying the maximum color intensity. A value
of, e.g., 5, implies that color intensity is limited to 5 overlapping
trajectories. I.e., a point at which 4 trajectories overlap will in that
case have a smaller color intensity than a point at which 5 trajectories
overlap, but there will be no difference between the latter and a point at
which 6 trajectories overlap. If \code{decay} is unequal 1, this metric
refers to the most intense color point within the trajectory.}

\item{discard_images}{logical specifying whether the temporary folder
containing the temporary \emph{.png} images should be deleted. Defaults to
TRUE.}

\item{im_path}{character string specifying the location of ImageMagick's
\emph{convert} function. If \code{NULL}, the \emph{convert} function is
expected in \code{'/usr/local/bin/convert'}, the default location for Linux
and OSX operating systems. The location has to be specified explicitly for
Windows (see Details and Examples).}

\item{parallel}{logical specifying whether the temporary \emph{.png} images
should be created using parallel processing (uses
\link[parallel:clusterApply]{clusterApplyLB}). Process will be run on the maximum
number of available cores (as determined by \link[parallel]{detectCores}).}

\item{verbose}{logical indicating whether function should report its
progress.}
}
\description{
\ifelse{html}{\href{https://lifecycle.r-lib.org/articles/stages.html#experimental}{\figure{lifecycle-experimental.svg}{options: alt='[Experimental]'}}}{\strong{[Experimental]}}

\code{mt_animate} animates trajectories using the animation package. Note
that this function has beta status.
}
\details{
\code{mt_animate} produces a .gif file showing a continuous stream of
animated trajectories. The function first produces a series of \emph{.png}
images, which then are combined into a \emph{.gif} animation using
\emph{ImageMagick} (see \url{https://www.imagemagick.org/}).

In order to run this function, ImageMagick must be installed (download from
\url{https://www.imagemagick.org/}). Under Unix systems (Linux and Apple's
OSX) the function will look for ImageMagick using its default installation
path. Alternatively, the location of ImageMagick's \emph{convert} function
can be provided using the \code{im_path} argument. Under Windows,
\code{im_path} must always be specified explicitly (e.g., it might look
something like this \code{im_path = "C:/Program
Files/ImageMagick-7.0.5-Q16/convert.exe"}).

During the animation trajectories are sampled from the data without
replacement. The function stops when it reaches the last trajectory contained
in \code{data}.

By default, \code{mt_animate} animates trajectories using the original
timestamps. Timestamps are expected to be expressed in milliseconds. By
setting \code{timestamps = NULL}, the function can also assume timestamps to
be regular, i.e., of constant interval, in this case the longest duration is
set to exactly one second.

In order to create high-resolution (large) animations in a relatively short
time increase \code{upscale} in favor of \code{xres}. However, note that this
will decrease the sharpness of the image.

In order to increase or decrease the overall color intensity decrease or
increase the \code{max_intensity}, respectively.
}
\examples{
\dontrun{
# Preprocess trajectory data
mt_example <- mt_align_start(mt_example)
mt_example <- mt_remap_symmetric(mt_example) 

# Create animated trajectory gif
# (under Linux / OSX)
mt_animate(mt_example,filename = "MyMovie.gif")

# Increase duration and density while decreasing speed
mt_animate(mt_example, filename = "MyMovie2.gif",
  seconds = 10, speed = .3, density = 10)

# Create animated trajectory gif
# (under Windows - ImageMagick version specific example)
mt_animate(mt_example,filename = "MyMovie.gif",
  im_path = "C:/Program Files/ImageMagick-7.0.5-Q16/convert.exe")

}

}
\author{
Dirk U. Wulff
}
