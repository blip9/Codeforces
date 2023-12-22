#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n,m;
    cin>>n>>m;
    unsigned long long max_pairs = ((n - m + 1) * (n - m)) / 2;
    unsigned long long min_pairs = m * (((n - m) / m + 1) * ((n - m) / m)) / 2 +
                    ceil((n - m) / double(m)) * ((n - m) % m);
 
    cout<<min_pairs<<endl;
    cout<<max_pairs;
    return 0;
}