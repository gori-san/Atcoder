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
	if(n == 0){
		cout << 0 << endl;
		return 0;
	}
	if(n < k || n%k != 0){
		cout << 1 << endl;
	}else{
		cout << 0 << endl;
	}
	return 0;
}
