#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int n, alice = 0, bob = 0;
	cin >> n;
	int a [ n ];
	REP(i,n) cin >> a [ i ];
	sort ( a, a+n );
	for ( int j = n - 1; j >= 0; j -= 2 ) {
		alice += a [ j ];
	}
	for ( int k = n - 2; k >= 0; k -= 2 ) {
		bob += a [ k ];
	}
	cout << alice - bob << endl;
	return 0;	
}