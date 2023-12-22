#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define e 2.718
double f(double x){
    return (log(x));
}
int main(){
    double a,b;
    int n;
    cout << "Simpson's 3/8 rule" << endl;
    cout << "Enter the lower limit (a):" << endl;
    cin >> a;
    cout << "Enter the upper limit (b):" << endl;
    cin >> b;
    cout << "Enter the no. of subintervals (must be multiple of 3):" << endl;
    cin >> n;
    if(n%3!=0){
        cout << "Number of subintervals must be multiple of 3 for simpson's 3/8 rule." << endl;
        return 1;
    }
    double h=(b-a)/n;
    double sum=f(a)+f(b);
    for(int i=1;i<n;i++){
        double x=a+i*h;
        if(i%3==0){
            sum+=2*f(x);
        }
        else{
            sum+=3*f(x);
        }
    }
    double result=(3*h/8)*sum;
    cout << "Approximate integral : " << result << endl;
    cout<<"\nMade by Tushar Adhikari\nIT-C\n13420803122"<<endl;
    return 0;
}

