#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int m[n], min = 1100, count = 0;
	REP(i,n) {
		cin >> m[i];
		x -= m[i];
		if (m[i] < min) min = m[i];
	}
	while(x >= min) {
		x -= min;
		count++;
	}
	cout << n + count << endl;
}