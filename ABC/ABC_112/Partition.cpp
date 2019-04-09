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
	if(m % n == 0){
		cout << m/n << endl;
		return 0;
	}
	int c = m/n;
	int ans = 1;
	for(int i = 2; i < c; i++){
		//cout << m-i*n << endl;
		if((m-i*n) % i == 0){
			//cout << "move" << endl;
			ans = max(ans, i);
		}
	}
	cout << ans << endl;
	return 0;
}
