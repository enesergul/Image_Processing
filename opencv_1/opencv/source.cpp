#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;



int main() {

	Mat animation(600, 800, CV_8UC3, Scalar(250,0,0));
	Mat x = animation.clone();

	for (int i = 0; i <= 450; i += 10) {
		putText(x, "Hadi len", Point(10 + i, 20 + i), FONT_HERSHEY_SIMPLEX, 2, Scalar(0, 255, 0), 3);
			
		waitKey(100);
		imshow("Hadilen animation", x);
		x = animation.clone();

	}

	for ( int i = 450; i >0; i -= 10) {
		putText(x, "Hadi len", Point(10+i,20+i), FONT_HERSHEY_SIMPLEX, 2, Scalar(0, 255, 0), 3);

		waitKey(100);
		imshow("Hadilen animation", x);
		x = animation.clone();

	}


}