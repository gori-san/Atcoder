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
	int N, W;
    int dp[N+1][W+1];
    cin >> N >> W;
    int w[N], v[N];
    REP(i,N) cin >> w[i] >> v[i];
    REP(i,W) dp[N][i] = 0;

    REP1(i,N){
        REP(j,W){

        }
    }
}


