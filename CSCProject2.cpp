#include <iostream>

int main() {
	int customers = 16500;
	int survey1 = customers * 0.15;
	int survey2 = survey1 * 0.58;
	std::cout << "Of the " << customers << " customers surveyed, around " << survey1 << " said that they purchase one or more energy drinks per week.\n";
	std::cout << "Of those customers, around " << survey2 << " said they prefer citrus-flavored energy drinks.";
}