#include<iostream>
#include<math.h>
#include<algorithm>
#include<numeric>
#include <type_traits>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n;
    cin >> n;
    int a[n];
    REP(i,n) cin >> a[i];
    int ans = 1000000001;
    REP(i,n-1){
        int j = max(a[i],a[i+1]);
        int k = min(a[i],a[i+1]);
        int r = j%k;
        while(r != 0){
            j = k;
            k = r;
            r = j%k;
        }
        ans = min(ans,k);
    }
    cout << ans << endl;
	return 0;
}
