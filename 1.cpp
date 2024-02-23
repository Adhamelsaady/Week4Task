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
bool containsDuplicate(vector<int>& nums) {
		map<int,int>mp;
		for(int i = 0 ; i < nums.size() ; i++) {
				mp[nums[i]]++;
				if(mp[nums[i]] >= 2)
						return true;
		}
		return false;
}
void ADHOOOOOM() {
		vector<int>v{1,2,3,1};
		cout << containsDuplicate(v);
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
	//	cin >> TESTCASES;
		while(TESTCASES--){
				ADHOOOOOM();
		}
}


