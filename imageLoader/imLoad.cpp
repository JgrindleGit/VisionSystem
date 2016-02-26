#include "opencv2/opencv.hpp"
#include "opencv2/gpu/gpu.hpp"

#include "imLoad.h"

void imLoad::load(int argc, char* argv[])
{
	try
	{
		cv::Mat src_host = cv::imread("file.png", CV_LOAD_IMAGE_GRAYSCALE);
        cv::gpu::GpuMat dst, src;
        src.upload(src_host);

        cv::gpu::threshold(src, dst, 128.0, 255.0, CV_THRESH_BINARY);
	}
	catch
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
}