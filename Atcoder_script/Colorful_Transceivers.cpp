#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;
int min = 1000000;

int main(){
	int a, b, c, d, l;
	cin >> a >> b >> c >> d;
	l = abs(c - a);
	if(l <= d){
		cout << "Yes" << endl;
	}else if(abs(a - b) <= d && abs(b - c) <= d){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}