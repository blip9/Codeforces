#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

// Function to safely compute (b^k - 1) / (b - 1)
ll geometricSum(ll b, int k)
{
    ll res = 1, term = 1;
    for (int i = 1; i < k; ++i)
    {
        if (res > 1e18 / b)
            return -1; // Prevent overflow
        term *= b;
        res += term;
        if (res > 1e18)
            return -1;
    }
    return res;
}

// Main function to find base, digit, and number of digits
bool findBase(ll N, ll &base, int &digit, int &length)
{
    for (int k = 2; k <= 64; ++k)
    {
        for (int d = 1; d <= 9; ++d)
        {
            if (N % d != 0)
                continue;
            ll target = N / d;
            ll low = 2, high = N;

            while (low <= high)
            {
                ll mid = (low + high) / 2;
                ll val = geometricSum(mid, k);
                if (val == target)
                {
                    base = mid;
                    digit = d;
                    length = k;
                    return true;
                }
                else if (val < target && val != -1)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
    }
    return false;
}

int main()
{
    ll N;
    cout << "Enter a number: ";
    cin >> N;

    ll base;
    int digit, length;

    if (findBase(N, base, digit, length))
    {
        cout << N << " = ";
        for (int i = 0; i < length; ++i)
            cout << digit;
        cout << " in base " << base << endl;
    }
    else
    {
        cout << "No such base found.\n";
    }

    return 0;
}
