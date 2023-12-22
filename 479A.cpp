#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int largest1,largest2,largest;
    largest1 = a+b>a*b?a+b:a*b;
    largest2 = c+b>c*b?c+b:c*b;
    largest1 = largest1*c>largest1+c?largest1*c:largest1+c;
    largest2 = largest2*a>largest2+a?largest2*a:largest2+a;
    largest1>largest2?cout<<largest1:cout<<largest2;
    return 0;
}