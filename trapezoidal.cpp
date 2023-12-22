#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double f(double x){
    return log(x);
}

int main(){
    double a,b;
    int n;
    cout << "\n Trapezoidal Rule\n";
    cout << "\n Finding integral of function log(x) w.r.t. x from limits\n";
    cout << "\n Enter the lower limit of the integration (a) :\n";
    cin >> a;
    cout << "\n Enter the upper limit of the integration (b) :\n";
    cin >> b;
    cout << "\n Enter the no of sub intervals (n) :\n";
    cin >> n;
    if(n<=a){
        cout << "The no. of sub intervals (n) must be positive.\n";
        return 1;
    }
    double h=(b-a)/n;
    double sum=(f(a)+f(b))/2.0;
    for(int i=1;i<n;i++){
        double x=a+i*h;
        sum+=f(x);
    }
    double integration=h*sum;
    cout << "Approximate integral : " << integration << "\n";
    cout<<"\nMade by Tushar Adhikari\nIT-C\n13420803122"<<endl;
    return 0;
}

