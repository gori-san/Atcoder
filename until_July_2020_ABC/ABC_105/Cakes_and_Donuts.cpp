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
	int sum = 0;
	if(n < 4){
		cout << "No" << endl;
		return 0;
	}
	REP(i,25){
		REP(j,15){
			if(4*i + 7*j == n){
				cout << "Yes" << endl;
				return 0;
			}else if(4*i + 7*j > n) break;
		}
	}
	cout << "No" << endl;
	return 0;
}
