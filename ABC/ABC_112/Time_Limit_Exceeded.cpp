#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int N, T;
	cin >> N >> T;
	int c[N], t[N];
	REP(i,N){
		cin >> c[i] >> t[i];
	} 
	int m = 2000;
	REP(i,N){
		if(t[i] <= T){
			m = min(c[i], m);
		}
	}
	if(m == 2000) cout << "TLE" << endl;
	else cout << m << endl;
	return 0;
}
