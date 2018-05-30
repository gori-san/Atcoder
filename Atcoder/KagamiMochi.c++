#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int n, count = 1;
	cin >> n;
	int d [ n ];
	REP(i,n) cin >> d [ i ];
	sort ( d, d+n );
	REP(i,n-1) {
		if ( d [ i ] < d [ i+1 ] ) count ++;
	}
	cout << count << endl;
	
	return 0;	
}