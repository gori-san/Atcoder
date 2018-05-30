#include<iostream>
#include<math.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int n;
	cin >> n;
	int t [ n + 1 ], x [ n + 1 ], y [ n + 1 ];
	t [ 0 ] = 0; x [ 0 ] = 0; y [ 0 ] = 0;
	REP1(i,n+1) {
		cin >> t [ i ] >> x [ i ] >> y [ i ];
	}
	
	REP(i,n) {
		int k = t [ i+1 ] - t [ i ];
		int d = abs ( x [ i ] - x [ i+1 ] ) + abs ( y [ i ] - y [ i+1 ] );
		if ( d > k || k%2 != d%2 ) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;	
}