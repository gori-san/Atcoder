#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, k, st = 1, c = 0;
	cin >> n >> k;
	int a[n];
	REP(i,n) cin >> a[i];
	while(st < n){
		st += k - 1;
		c++;
	}
	cout << c << endl;
	return 0;
}
