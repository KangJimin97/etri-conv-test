#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int your_conv( cv::,Mat src
               cv::Mat dst,
               cv::Mat kernel,
               int stride,
               int padding
               )
{
    int src_height = src.rows;
    int src_width = src.cols;

    int kernel_height = kernel.rows;
    int kernel_width = kernel.cols;

    int dst_height;
    int dst_width;

	for(int i=0; i<src_height ; i+3){
		for(int j=0; i<src_width ; j++){
			for(int z=0; z<i<src_height; z++);
			aa[z][j]=

for(int i=1; i<src_height ; i+3){
		for(int j=0; i<src_width ; j++){
			aa[][]=
for(int i=2; i<src_height ; i+3){
		for(int j=0; i<src_width ; j++){
			aa[][]=
    // src.ptr<unsigned char>(i)[ calculate INDEX ]

    // MAKE YOUR OWN CONVOLUTION PROCESS
<<<<<<< HEAD
for(//메트 세로 
for(kernel.cols=0;kernel.cols<kernel.cols->w;kernel.cols){ //각 열 필터 
for(kernel.rows=0;kernel.rows<kernel.cols->h;kernel.rows++){//각 행 필터

int h = 
Mat dst+=Mat_src(src.cols,src.rows)*Mat_kernel(kernel.cols,kernel.rows);













=======
	int **aa;
	aa = (int**)malloc(dst_height*sizeof(int*));
	for(int i=0; i<dst_height; i++){
		*(aa+i) = (int*)malloc(dst_width*sizeof(int));
	}

	int pp[dst_height+2*padding][dst_width+2*padding] = {};
	for(int i=0; i<dst_height; i++){
		for(int j=0; j<dst_width; j++){
			padding[i+padding][j+padding] = aa[i][j];
		}
	}

	for(int i=0; i<((w-f+2*p)/s)+1; i++){
		for(int j=0; j<((w-f+2*p)/s)+1; j++){
			for(int k=0; k<f; k++){
				for(int l=0; l<f; l++){
					cc[i][j] +=padding[k+i*s][l+j*s]*bb[l][k];
				}
			}
		}
	}
>>>>>>> fc0e02ed442555cb90267a074e694a9cb0fa2437

    // if success
    return 0;

    // if fail - in the case of wrong parameters...
    // return -1
}

int main ( int argc, char** argv )
{
    if (argc < 2) {
        std::cout << "no filename given." << std::endl;
        std::cout << "usage: " << argv[0] << " image" << std::endl;
        return -1;
    }

    cv::Mat src, kernel, dst;

    // Load an image
    src = cv::imread( argv[1] );
    if( !src.data )  { return -1; }

    // Make filter
    kernel = (cv::Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);


    // Run 2D filter
    //cv::filter2D(src, dst, -1 , kernel, cv::Point( -1, -1 ), 0, cv::BORDER_DEFAULT );

    // ---------------------------
    your_conv(src,dst,kernel,1,0);
    // ---------------------------

    cv::namedWindow( "filter2D Demo", cv::WINDOW_AUTOSIZE );
    cv::imshow( "filter2D Demo", dst );

    cv::waitKey(0);
    return 0;
}
