#include<iostream>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int a, b, x;
	cin >> x >> a >> b;
	cout << ( ( x-a ) % b ) << endl;
	return 0;	
}