#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int r;
	cin >> r;
	if(r < 1200) cout << "ABC" << endl;
	else if(r < 2800)cout << "ARC" << endl;
	else cout << "AGC" << endl;
	return 0;
}
