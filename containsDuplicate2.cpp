#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            // If the current element exists in the set, return true
            if (seen.find(nums[i]) != seen.end())
                return true;

            // Add the current element to the set
            seen.insert(nums[i]);

            // If the size of the set exceeds k, remove the oldest element
            if (seen.size() > k)
                seen.erase(nums[i - k]);
        }

        return false;
    }
};
