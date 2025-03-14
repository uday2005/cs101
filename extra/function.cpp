#include <iostream>
#include <cmath>
using namespace std;


void Cartesian_To_Polar(double x, double y, double &r, double &theta) {
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
}

int main() {
    double x = 3.0, y = 4.0;
    double r = 0.0, theta = 0.0;

    Cartesian_To_Polar(x, y, r, theta);

    std::cout << "r: " << r << ", theta: " << theta << std::endl;
    // if we would have been passing the all arguments inside the functionby value then r and theta will not 
    // chnaged and the answer will be zero for r and theta.

    return 0;
}
