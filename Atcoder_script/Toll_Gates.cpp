#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, m, x, suml = 0, sumr = 0;
	cin >> n >> m >> x;
	int a[m];
	REP(i,m) cin >> a[i];
	REP(i,x){
		REP(j,m){
			if(i == a[j]) suml++;
		}
	}
	FOR(i,x,n){
		REP(j,m){
			if(i == a[j]) sumr++;
		}
	}
	cout << min(suml, sumr) << endl;
	return 0;
}
