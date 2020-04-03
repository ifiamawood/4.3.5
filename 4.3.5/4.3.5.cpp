// 4.3.5.cpp : 定义控制台应用程序的入口点。
//


#include"stdafx.h"
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using std::string;


int main()
{
	cv::Mat dst,out1,out2;
	cv::Mat srcMat = cv::imread("D:\\lena.jpg", 1);
	if (srcMat.empty()) return -1;
	cvtColor(srcMat, dst, CV_BGR2GRAY);
	GaussianBlur(dst, dst, Size(7, 7), 1.5, 1.5);
	Canny(dst, dst, 0, 30, 3);
	imshow("1", dst);
	waitKey(0);
}

