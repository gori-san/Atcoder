#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, max_a = 0, min_a = 1000000001;
	cin >> n;
	int a[n];
	REP(i,n){
		cin >> a[i];
		if(a[i] > max_a) max_a = a[i];
		if(a[i] < min_a) min_a = a[i];
	}
	cout << max_a - min_a << endl;
	return 0;
}
