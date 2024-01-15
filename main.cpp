#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));

    if (image.empty()) {
        std::cerr << "Error: Could not create the image." << std::endl;
        return -1;
    }

    cv::imshow("Blank Image", image);
    cv::waitKey(0);

    return 0;
}
