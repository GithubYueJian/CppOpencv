#include </home/yuejian/anaconda3/include/python3.6m/Python.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	Py_Initialize();
    PyRun_SimpleString("print(\"Hello, world!\")");
    Py_Finalize();

    Mat Y_Image = imread("1.jpg",0);
    cv::imwrite("2.jpg",Y_Image);
    return 0;

}

