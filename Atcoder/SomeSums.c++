#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int n, a, b, c, count = 0;
	cin >> n >> a >> b;
	REP1(i,n+1) {
		int t = i;
		c = 0;
		REP(j,5) {
			c += t%10;
			t /= 10;
		}
		if ( a <= c && c <= b ) {
			count += i;
		}
	}
	cout << count << endl;
	return 0;	
}