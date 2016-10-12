#ifndef CROSSINGNUMBER_H_INCLUDED
#define CROSSINGNUMBER_H_INCLUDED

#include <opencv2/imgproc/imgproc.hpp>
#include "Minutiae.h"

namespace crossingNumber {

    void getMinutiae(cv::Mat& im, std::vector<Minutiae>& minutiae, int border, double directMatrix[IMAGE_WIDTH][IMAGE_HEIGHT]);

}

#endif // CROSSINGNUMBER_H_INCLUDED
