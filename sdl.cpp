#include <iostream>
#include <cmath>

double function(double x, double y) {
    // Define the differential equation here, for example y' = x^2 + y
    return x + y;
}

double rungeKutta(double x0, double y0, double h, double xEnd) {
    double k1, k2, k3, k4;
    double y = y0;
    double x = x0;

    while (x < xEnd) {
        k1 = h * function(x, y);
        k2 = h * function(x + 0.5 * h, y + 0.5 * k1);
        k3 = h * function(x + 0.5 * h, y + 0.5 * k2);
        k4 = h * function(x + h, y + k3);

        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        x = x + h;
    }

    return y;
}

int main() {
    double x0, y0, h, xEnd;

    std::cout << "Enter initial value of x: ";
    std::cin >> x0;

    std::cout << "Enter initial value of y: ";
    std::cin >> y0;

    std::cout << "Enter step size (h): ";
    std::cin >> h;

    std::cout << "Enter the end value of x: ";
    std::cin >> xEnd;

    double result = rungeKutta(x0, y0, h, xEnd);

    std::cout << "The result at x = " << xEnd << " is: " << result << std::endl;

    return 0;
}
