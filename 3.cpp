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
bool isValid(string &s) {
		stack<char>st;
		for(int i = 0 ; i < s.size() ; i++) {
				if(s[i] == '[' || s[i] == '{' || s[i] == '(')
						st.push(s[i]);
				else{
						if(st.empty())
								return false;
						char z = st.top();
						if(z == '(' && s[i] == ')' || z == '[' && s[i] == ']' || z == '{' && s[i] == '}') {
								st.pop();
								continue;
						}
						else{
								return false;
						}
				}
		}
		if(!st.empty())
				return false;
		return true;
}
void ADHOOOOOM() {
		string str; cin >> str;
		cout << isValid(str) << endl;
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
		cin >> TESTCASES;
		while(TESTCASES--){
				ADHOOOOOM();
		}
}


