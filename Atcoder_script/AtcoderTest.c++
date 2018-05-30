#include<iostream>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
  
using namespace std;

int main() {
	int a, b, c;
	string s;
	cin >> a >> b >> c;
	cin >> s;
	cout << a+b+c << " " << s << endl;
	return 0;	
}