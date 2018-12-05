#include "database.h"

void Database::train() {
	std::ifstream fin;
	fin.open("fileName.txt");

	std::string file;
	std::string signName;
	int numImages;

	//iterate through the files in the text files and create the appropriate signs and spans
	while (fin >> file) {


		//loop through the images
		for (unsigned i = 0; i < numImages; ++i) {

			//read in the sign name and number of images
			signName = file;
			fin >> numImages;

			//create the Span for this sign
			Span span;

			//loop through the text files for this image
			for (unsigned i = 0; i < 3; ++i) {

				fin >> file;

				//stream that reads the pixel values from a text file
				std::ifstream pixelRead;
				//open the stream
				pixelRead.open(file);

				//if it is a red pixel file
				if (i == 0) {

					//while (
				}
				//else if it is a green pixel file
				else if (i == 1) {

				}
				//else it is a blue pixel file
				else {

				}

			}
		}

	}

}

// Uses the various span errors to predict the road sign of the inputted image
std::string Database::predictSign(Sign &query) {

	// Keep track of the minimum span and the element at which it occurred
	std::string nameMinError = data[0].name;

	double minError = data[0].getSpanError;

	// Iterate through the vector of spans
	for (unsigned i = 1; i < data.size(); ++i) {

		// Reset the minimum when necessary
		if (data[i].getSpanError < minError) {

			minError = data[i].getSpanError;
			nameMinError = data[i].name;
		}
	}
	// Return the final minimum
	return nameMinError;
}
