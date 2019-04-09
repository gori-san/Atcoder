#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n], c[n], ans = 0;
	REP(i,n){
		c[i] = 0;
	}
	REP(i,n){
		cin >> a[i];
		b[i] = a[i];
		while(b[i] % 2 == 0){
			c[i]++;
			b[i] /= 2;
		}
	}

	REP(i,n){
		ans += c[i];
	}
	cout << ans << endl;
	return 0;
}
