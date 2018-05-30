#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	char s[3];
	int count = 0;
	REP(i,3) {
		cin >> s[i];
		if (s[i] == 'o') count++;
	}
	cout << 700 + 100*count << endl;
	return 0;
}