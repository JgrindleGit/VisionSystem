##ifndef VIDIN_H
#define VIDIN_H value
class vidIn
{
public:
	vidIn(const char *path);
	~vidIn();
	bool nextF(cv::Mat &frame, bool pause = false);
private:
	cv::VideoCapture cap;
	cv::Mat frame;
};
#endif