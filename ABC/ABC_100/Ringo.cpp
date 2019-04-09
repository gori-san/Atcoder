#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int d, n, x = 1, c, os = 0;
	cin >> d >> n;
	if (n == 100){
		os = 1;
	}
	REP(i,d){
		x *= 100;
	}


	cout << x * (n+os) << endl;
	return 0;
}
