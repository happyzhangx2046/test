#include "highgui.h"

int main( int argc, char** argv )
{
	
	IplImage* img123456 = cvLoadImage( argv[1] );
		cvNamedWindow("Example1", CV_WINDOW_AUTOSIZE );
		cvShowImage("Example1", img123456 );
		cvWaitKey(0);
		cvReleaseImage( &img123456 );
		cvDestroyWindow("Example1");
}
