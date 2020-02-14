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

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	int xImageSize = image.getWidth();
	int yImageSize = image.getHeight();

	int const xSize = 2;
	int const ySize = 2;
	int matrix[xSize][ySize];

	for (int i = 0; i < xImageSize - xSize; i++)
	{
		for (int j = 0; j < yImageSize - ySize; j++)
		{

		}
	}
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}