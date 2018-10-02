#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int t = max(a, max(b, c));
	if(t == a){
		cout << 10*t + b + c << endl;
	}else if(t == b){
		cout << 10*t + a + c << endl;
	}else{
		cout << 10*t + a + b << endl;
	}
	return 0;
}
