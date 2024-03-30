#include<bits/stdc++.h>
using namespace std;
double f(double x) {
    return pow(x, 3) - 6 * pow(x, 2) + 11 * x - 6;
}
double bisection_method(double a, double b, double tol = 1e-4, int max_iter = 1000) {
    if (f(a) * f(b) >= 0) {
        return NAN; // Not a Number
    }
    
    int iter_count = 0;
    while ((b - a) / 2 > tol && iter_count < max_iter) {
        double mid = (a + b) / 2;
        if (f(mid) == 0) {
            return mid;
        } else if (f(a) * f(mid) < 0) {
            b = mid;
        } else {
            a = mid;
        }
        iter_count++;
    }
    
    return (a + b) / 2;
}
int main() {
    double X ;
    double Y ;
    cin>>X>>Y;
    
    double root = bisection_method(X, Y);
    cout<< fixed<<setprecision(3)<<root<<endl;
    
    return 0;
}