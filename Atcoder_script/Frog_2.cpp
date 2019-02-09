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
	int N, K;
	cin >> N >> K;
	int h[N];
	REP(i,N) cin >> h[i];
	int dp[N + K];
	REP(i,N+K) dp[i] = INF;
	dp[0] = 0;
	REP(i,N){
        REP1(j,K+1){
            dp[i+j] = min(dp[i+j], dp[i]+abs(h[i] - h[i+j]));
        }
	}
	cout << dp[N - 1] << endl;
	return 0; 
}


