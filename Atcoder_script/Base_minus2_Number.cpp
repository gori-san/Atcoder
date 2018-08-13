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
	int sum = 0, s = 1, c = 1, m = 1;
	long long int ans = 0;
	while(sum != n){
		if(n % 2*c != 0){
			ans += s;
			sum += m;
		}
		
	}

}

