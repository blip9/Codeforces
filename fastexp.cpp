#include <iostream>

using namespace std;

int powerMod(long long int x, long long int n, long long int k) {
    int ans = 1;
    x %= k;
    
    while (n > 0) {
        if (n & 1) {
            ans = (ans * x) % k; 
        }
        x = (x * x) % k; 
        n >>= 1;
    }
    
    return ans;
}

int main() {
    long long int x, n, k;
    cin >> x;
    cin >> n;
    cin >> k;
    
    long long int result = powerMod(x, n, k);
    cout << result << endl;
    
    return 0;
}
