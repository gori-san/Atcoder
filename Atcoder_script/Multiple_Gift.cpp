#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int c = 1;
	ll x, y;
	cin >> x >> y;
	while(2*x <= y){
		c++;
		x *= 2;
	}
	cout << c << endl;
	return 0;
}