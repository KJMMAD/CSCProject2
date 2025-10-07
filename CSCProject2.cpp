#include <iostream>

int main()
{
    float mMeters = 1.5;
    for (int year = 5; year <= 10; year++) {
        float risenHeight = mMeters * year;
        if (year == 5 || year == 7 || year == 10) {
            std::cout << "The ocean level will have risen by " << risenHeight << "millimeters in " << year << " years.\n";
        }
    }
}