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
int strStr(string haystack, string needle) {
		int n=haystack.size();
		int m=needle.size();
		for(int i=0;i<n;i++){
				if(haystack[i] == needle[0]){
						bool flag = 1;
						for(int k=0;k<m;k++){
								if(needle[k]!=haystack[i+k]){
										flag=false;
										break;
								}
						}
						if(flag)
								return i;
				}
		}
		return -1;
}
void ADHOOOOOM() {
		string str1,str2; cin >> str1 >> str2;
		cout << strStr(str1,str2) << endl;
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
		cin >> TESTCASES;
		while(TESTCASES--){
				ADHOOOOOM();
		}
}


