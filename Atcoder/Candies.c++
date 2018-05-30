#include<iostream>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[2][n];
	REP(i,2) {
		REP(j,n) {
			cin >> a [ i ] [ j ];
		}
	}
	int sum;
	int maxSum = 0;
	
	REP(i,n) {
		sum = 0;
		REP(j,i+1) {
			sum += a [ 0 ] [ j ];
		}
		FOR(k,i,n) {
			sum += a [ 1 ] [ k ];
		}
		if ( sum > maxSum ) maxSum = sum;
	}
	
	cout << maxSum << endl;
	return 0;	
}