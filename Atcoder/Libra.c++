#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ( a+b > c+d ) {
		cout << "Left" << endl;
	} else if ( a+b == c+d ) {
		cout << "Balanced" << endl;
	} else {
		cout << "Right" << endl;
	}
	return 0;	
}