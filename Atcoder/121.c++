#include<iostream>
#include<math.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int a, b, c, d, tmp, count = 0;
	cin >> a >> b;
	tmp = b;
	while ( tmp >= 10 ) {
		tmp /= 10;
		count++;
	}
	c = a;
	REP(i,count+1) c *= 10;
	c += b;
	d = floor ( sqrt ( c ) );
	if ( d*d == c ) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;	
}