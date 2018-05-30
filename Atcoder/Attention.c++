#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, min=100000, wcount=0, ecount = 0;
	cin >> n;
	char s[n];
	REP(i,n) cin >> s[i];
	REP1(i,n){
		if(s[i] == 'E') ecount++;
	}
	min = ecount;
	for(int i = 1; i < n; i++){
		if(s[i-1] == 'W') wcount++;
		if(s[i] == 'E') ecount--;
		if(wcount + ecount < min){
			min = wcount + ecount;
		}
	}
	cout << min << endl;
	return 0;
}
