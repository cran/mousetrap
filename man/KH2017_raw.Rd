% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/data.R
\docType{data}
\name{KH2017_raw}
\alias{KH2017_raw}
\title{Raw mouse-tracking dataset from Kieslich & Henninger (2017)}
\format{
A \link{data.frame} with 1140 rows and 19 variables. The data.frame is
based on the combined raw data that were created using
\link[readbulk]{read_opensesame} from the
\href{http://pascalkieslich.github.io/readbulk/}{readbulk} library. For
ease of use, unnecessary columns were excluded.

The variables included relate to the item that was presented
(\code{Exemplar}), the answer categories (\code{Category1} and
\code{Category2}), the subject identifier (\code{subject_nr}), the
subjects' response (\code{response}), the correctness of the response
(\code{response}) as well as the mouse-tracking variables
(\code{timestamps_get_response}, \code{xpos_get_response} and
\code{ypos_get_response})

Each mouse-tracking variable contains a list of values (separated by ', ')
\itemize{
\item one entry for each recorded position of the mouse. The position
coordinates are given in pixels, such that values of zero for both
\code{xpos_get_response} and \code{ypos_get_response} indicate that the
cursor is located in the center of the screen. Both variables increase in
value as the mouse moves toward the bottom right. Timestamps are given in
milliseconds.
}
}
\usage{
KH2017_raw
}
\description{
Raw mouse-tracking dataset from Kieslich & Henninger (2017), an experiment
using the material and procedure of experiment 1 by Dale et al. (2007). A
preprocessed (as opposed to raw) version of the same data can be found in
\link{KH2017}.
}
\details{
The data stem from a study by Kieslich & Henninger (2017) which used the
material and procedure of experiment 1 by Dale et al. (2007). In this
experiment, participants have to assign exemplars (e.g., "whale") to one of
two categories (e.g., "fish" or "mammal") by clicking on the button
corresponding to the correct category. All exemplars and categories from the
original study were translated to and presented in German.

The data was collected in \href{https://osdoc.cogsci.nl/}{OpenSesame} using
the \href{https://github.com/pascalkieslich/mousetrap-os}{mousetrap plugin}
(Kieslich & Henninger, 2017).

Across the 19 trials of the experiment, 60 participants categorized 13
exemplars that were typical of their category and 6 atypical exemplars for
which this was not the case. For the atypical exemplars (e.g., "whale"), the
competing category ("fish") was selected to compete with the correct category
("mammal"). The hypothesis under investigation is whether participants' mouse
trajectories deviate more towards the competing category for the atypical
exemplars, indicating increased conflict between the response options.
}
\references{
Kieslich, P. J., & Henninger, F. (2017). Mousetrap: An
integrated, open-source mouse-tracking package. \emph{Behavior Research
Methods, 49}(5), 1652-1667. \doi{10.3758/s13428-017-0900-z}

Dale, R., Kehoe, C., & Spivey, M. J. (2007). Graded motor responses in the
time course of categorizing atypical exemplars. \emph{Memory & Cognition,
35}(1), 15-28. \doi{10.3758/BF03195938}
}
\keyword{datasets}
