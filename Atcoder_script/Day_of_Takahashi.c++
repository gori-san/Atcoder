#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int a, b, ans;
	cin >> a >> b;
	ans = a - 1;
	if ( a <= b ) ans++;
	cout << ans << endl;
	return 0;
}