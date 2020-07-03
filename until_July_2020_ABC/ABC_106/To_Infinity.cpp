#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	string s;
	long long int k;
	cin >> s >> k;
	int n[s.length()];
	int ans = 1, c = 1;;
	REP(i, s.length()){
		n[i] = s[i] - '0';
		if(n[i] == 1 && c == k){
			break;
		}
		if(n[i] != 1){
			ans = n[i];
			break;
		}
		c++;
	}
	
	cout << ans << endl;
	return 0;
}
