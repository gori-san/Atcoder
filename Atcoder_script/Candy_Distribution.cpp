#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	long long int n, m;
	cin >> n >> m;
	long long int a[n];
	REP(i,n) cin >> a[i];
	long long int sum[n][n];
	long long int count = 0;
	REP(i,n){
		REP(j,n){
			sum[i][j] = 0;
		}
	}
	sum[0][0] = a[0];
	if(sum[0][0] % m == 0) count++;
	FOR(i,1,n){
		sum[0][i] = sum[0][i-1] + a[i];
		if(sum[0][i] % m == 0) count++;
	}
	FOR(i,1,n){
		FOR(j,i,n){
			sum[i][j] = sum[i-1][j] - a[i-1];
			if(sum[i][j] % m == 0) count++;
		}
	}
	cout << count << endl;
	return 0;
}
