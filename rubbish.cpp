#include <iostream>
#include <cmath>

class SeriesCalculator {
private:
    double result;

public:
    // Constructor to calculate the sum of the series
    SeriesCalculator(double x, int n) {
        result = 1.0;  // Initialize with the first term of the series (1 + ...)
        double term = 1.0;

        for (int i = 1; i <= n; ++i) {
            term *= x / i;  // Calculate the next term
            result += term; // Add the term to the result
        }
    }

    // Function to get the result
    double getResult() const {
        return result;
    }
};

int main() {
    double x;
    int n;

    // Input values for x and n
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Create an instance of SeriesCalculator using the constructor
    SeriesCalculator calculator(x, n);

    // Display the result
    std::cout << "Sum of the series: " << calculator.getResult() << std::endl;

    return 0;
}
