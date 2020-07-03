#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	ll k, a, b, ans;
    cin >> k >> a >> b;
    ll minK = k-(a-1);
    if(b-a >= 3){
        if(minK % 2 == 0){
            ans = a + minK/2 * (b-a);
        }else{
            ans = a + minK/2 * (b-a) + 1;
        }
    }else{
        ans = k + 1;
    }
    cout << ans << endl;
	return 0;
}
