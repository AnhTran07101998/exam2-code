/*************************************************************************
Starter code for exam II of ECE 231
Rename the file from convolution.cpp to lastname_firstname_convolution.cpp,
	failing to do this will result in a loss of 5 points.
*************************************************************************/
#include <iostream>
#include <vector>

//Prints contents of a vector
void print_vector(std::vector<int> vect) {
	for(auto i : vect) {
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;
}

bool convolution(const std::vector<int> XVector, 
		const std::vector<int> HVector, 
		std::vector<int> &YVector) {
	/**** START EDITING HERE ****/

	return false;
}

int main() {
	//Defines two vectors of size 4 with values of 1
	std::vector<int> XSignal(4, 1);
	std::vector<int> HSignal(4, 1);

	//Defines a vector of size 7 (2*4 -1) with values of 0
	std::vector<int> YSignal(XSignal.size()+HSignal.size()-1, 0);

	std::cout << "Printing vector x" << std::endl;
	print_vector(XSignal);

	std::cout << "Printing vector h" << std::endl;
	print_vector(HSignal);

	bool bConvResult = convolution(XSignal, HSignal, YSignal);
	if(bConvResult) {
		std::cout << "Printing convolved vector y" << std::endl;
		print_vector(YSignal);
	}
	else {
		std::cout << "Could not print convolved signal" << std::endl;
	}

	return 0;
}
