#include <bits/stdc++.h>
#include<math.h>
using namespace std;
double f(double x){
    return (1/(1+x*x));
}
int main(){
    double a,b;
    int n;
    cout << "\n SIMPSON'S 1/3 RULE \n";
    cout << "\n Enter the lower limit (a) :\n";
    cin >> a;
    cout << "\n Enter the upper limit (b) :\n";
    cin >> b;
    cout << "\n Enter the no. of subintervals (must be even):\n";
    cin >> n;
    if(n%2!=0){
        cout << "Number of subintervals must be even for simpson's 1/3 rule.";
        return 1;
    }
    double h=(b-a)/n;
    double sum=f(a)+f(b);
    for(int i=1;i<n;i++){
        double x=a+i*h;
        if(i%2==0){
            sum+=2*f(x);
        }
        else{
            sum+=4*f(x);
        }
    }
    double result=(h/3)*sum;
    cout << "Approximate integral : " << result << endl;
    cout<<"\nMade by TUSHAR ADHIKARI\nIT-C\n13420803122"<<endl;
    return 0;
}

