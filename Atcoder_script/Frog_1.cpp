#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;
#define INF 1001001001

int main(){
	int N;
	cin >> N;
	int h[N];
	REP(i,N) cin >> h[i];
	int dp[N + 1];
	REP(i,N+1) dp[i] = INF;
	dp[0] = 0;
	//dp[1] = min(h[1], abs(h[0] - h[1]));
	REP(i,N){
		dp[i+1] = min(dp[i+1], dp[i]+abs(h[i] - h[i+1]));
		dp[i+2] = min(dp[i+2], dp[i]+abs(h[i] - h[i+2]));
	}
	cout << dp[N - 1] << endl;
	return 0; 
}


