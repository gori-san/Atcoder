#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;
int h, w, tmp = 0;
char s [ 52 ][ 52 ];

bool T ( int i, int j);

int main() {
	int count = 0;
	cin >> h >> w;
	REP(i,h) {
		REP(j,w) {
			cin >> s [ i ] [ j ];
			if ( s [ i ] [ j ] == '.' ) {
				count++;
			}
		}
	}
	if ( ! T ( 0, 0 ) ) {
		cout << -1 << endl;
		return 0;
	}
	cout << ( count - ( h - 1 ) - ( w - 1 ) - 1 ) << endl;
	return 0;	
}

bool T ( int i, int j ) {
	if ( i == h-1 && j == w-1 ) {
		return true;
	}
	if ( i > h || j > w ) {
		return false;
	}
	if ( s [ i ] [ j ] == '#' ) {
		return false;
	}
	if ( T ( i+1, j  ) ) {
		return true;
	}
	if ( T ( i, j+1  ) ) {
		return true;
	}
	return false;
}
