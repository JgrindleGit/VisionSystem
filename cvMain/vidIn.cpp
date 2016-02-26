#include "opencv2/imgproc/imgproc.hpp"

#include "vidIn.h"

using namespace cv;
using namespace std;

vidIn::vidIn()
{
	cap = VideoCapture(path);
}
bool vidIn::nextF(Mat &frame, bool pause)
{
	if(!pause)
	{
		cap >> frame;
		if(frame.empty())
			return false;
		if(frame.rows > 800)
			pyrDown(frame, frame);
	}
	im = frame.clone();

	return true;
}