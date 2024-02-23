#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
#define sp " "
#define el '\n'
#define int long long
#define FAST_IO cin.sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ss second
#define f first
#define srt(v) sort(v.begin(), v.end())
#define rev(v) sort(v.rbegin(), v.rend())
#define prntv(vec) for(auto i : vec) cout << i << " "
#define memo(m, v) memset(m, v, sizeof(m))
using namespace std;
const int MOD = /*998244353;*/ 1e9 + 7;
const long long oo = 1e16;
const int N = 3000 + 1;
string yes = "YES", no = "NO";
/*
<--------------------CODE GOES FROM HERE --------------------->
*/
vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		vector<int>ans(n);
		vector<int>left(n);
		vector<int>right(n);
		left[0] = 1;
		for(int i = 1 ; i < n ;i++){
				left[i] = left[i-1] * nums[i-1];
		}
		right[n-1] = 1;
		for(int i = n - 2 ; i >= 0 ;i--){
				right[i] = right[i+1] * nums[i+1];
		}
		for(int i=0; i<n; i++){
				ans[i] = left[i] * right[i];
		}
		return ans;
}
void ADHOOOOOM() {
		vector<int> v {-1 , 1 , 0 , -3 , 3};
		auto vv = productExceptSelf(v);
		prntv(vv);
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
		// cin >> TESTCASES;
		while(TESTCASES--){
				ADHOOOOOM();
		}
}


