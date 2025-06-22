#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
	// Write your solution here
	vector<int>arr = {0,0,0};
	sort(arr.begin(),arr.end(),[](int& a,int &b){
		string astr = to_string(a);
		string bstr = to_string(b);

		return stoll(astr+bstr) < stoll(bstr+astr);
	});
	int i = 0,cnt = 0;
	while(i<arr.size()){
		if(arr[i]==0){
			arr.erase(arr.begin()+i);
			cnt++;
		}else{
			i++;
		}
	}
	string ans = "";
	for(int i = 0;i<arr.size();i++){
		if(i==1){
			while(cnt--)ans += "0";
		}
		ans += to_string(arr[i]);
	}
	if(cnt){
		while(cnt--)ans+="0";
	}
	cout<<stoll(ans);

}

int main() {
	fast_io;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}