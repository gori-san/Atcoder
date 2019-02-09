#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	REP(i,n){
        REP(j,m){
            cin >> a[i][j];
        }
    }
	REP(i,n){
        FOR(j,i,n){
            REP(k,m){
                FOR(l,k,m){
                    
                }
            }
        }
    }
	return 0;
}