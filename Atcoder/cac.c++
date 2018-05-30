#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int func(string s, string t){
	int ans = 0;
	for(char c = 'a'; c <= 'z'; c++){
		bool founds = false;
		bool foundt = false;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == c){
				founds = true;
			}
		}
		for(int i = 0; i < t.length(); i++){
			if(t[i] == c){
				foundt = true;
			}
		}
		if(founds && foundt) ans++;
	}
	return ans;
}

int main(){
	int n, ans=0;
	string s;
	cin >> n >> s;
	for(int i = 0; i<= n; i++){
		int temp = func(s.substr(0,i),s.substr(i+1,n-i));
		ans = max(ans,temp);
	}
	cout << ans << endl;
	return 0;
}




