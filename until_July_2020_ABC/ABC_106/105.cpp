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
	int a = 1, b, c, ans = 0;
	while(a <= n){
		b = 1;
		c = 0;
		while(b <= a){
			if(a % b == 0){
				c++;
				//cout << c << endl;
			}
			b += 2;
		}
		if(c == 8) ans++;
		a += 2;
	}
	
	cout << ans << endl;
	return 0;
}
