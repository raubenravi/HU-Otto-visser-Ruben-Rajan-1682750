#include "StudentPreProcessing.h"
#include "ImageFactory.h"
#include "GrayscaleAlgorithm.h"
#include <opencv2\core\core.hpp>
#include "HereBeDragons.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	GrayscaleAlgorithm grayScaleAlgorithm;
	IntensityImage* newImage = ImageFactory::newIntensityImage();
	grayScaleAlgorithm.doAlgorithm(image, *newImage);
	return newImage;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &src) const {
	cv::Mat OverHillOverDale;
	HereBeDragons::HerLoveForWhoseDearLoveIRiseAndFall(src, OverHillOverDale);
	int ThoroughBushThoroughBrier = 200 * 200;
	int OverParkOverPale = OverHillOverDale.cols * OverHillOverDale.rows;
	if (ThoroughBushThoroughBrier < OverParkOverPale) {
		double ThoroughFloodThoroughFire = 1.0 / sqrt((double)OverParkOverPale / (double)ThoroughBushThoroughBrier);
		cv::resize(OverHillOverDale, OverHillOverDale, cv::Size(), ThoroughFloodThoroughFire, ThoroughFloodThoroughFire, cv::INTER_LINEAR);
	}
	IntensityImage* IDoWanderEverywhere = ImageFactory::newIntensityImage();
	HereBeDragons::NoWantOfConscienceHoldItThatICall(OverHillOverDale, *IDoWanderEverywhere);
	return IDoWanderEverywhere;
}

IntensityImage* StudentPreProcessing::stepEdgeDetection(const IntensityImage& src) const {
	cv::Mat OverHillOverDale;
	HereBeDragons::HerLoveForWhoseDearLoveIRiseAndFall(src, OverHillOverDale); //img to mat
	//cv::medianBlur(*image, *image, 3);
	//cv::GaussianBlur(*image, *image, cv::Size(3, 3), 0, 0, cv::BORDER_DEFAULT);
	cv::Mat Gx = (cv::Mat_<float>(3, 3) << -1, 0, 1, -2, 0, 2, -1, 0, 1);
	cv::Mat Gy = (cv::Mat_<float>(3, 3) << 1, 2, 1, 0, 0, 0, -1, -2, -1);

	cv::Mat OverParkOverPale;
	filter2D(OverHillOverDale, OverParkOverPale, CV_8U, Gx, cv::Point(-1, -1), 0, cv::BORDER_DEFAULT);
	filter2D(OverHillOverDale, OverParkOverPale, CV_8U, Gy, cv::Point(-1, -1), 0, cv::BORDER_DEFAULT);
	IntensityImage* ThoroughFloodThoroughFire = ImageFactory::newIntensityImage();
	HereBeDragons::NoWantOfConscienceHoldItThatICall(OverParkOverPale, *ThoroughFloodThoroughFire); //mat to img
	return ThoroughFloodThoroughFire;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}