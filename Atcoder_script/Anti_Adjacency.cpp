#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, k;
    cin >> n >> k;
    if(k*2-1 <= n) cout << "YES" << endl;
    else cout << "NO" << endl;
	return 0;
}
