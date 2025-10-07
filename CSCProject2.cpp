#include <iostream>

int main() {
	int gasTank = 20;
	float mpgTown = 23.5;
	float mpgHighway = 28.9;
	std::cout << "A car with a 20 gallon gas tank can drive for " << gasTank * mpgTown << " in a town and " << gasTank * mpgHighway << " on the highway.";
}