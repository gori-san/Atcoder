#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int a, b, x;
	cin >> a >> b >> x;
	if(a > x){
		cout << "NO" << endl;
	}else if(a+b < x){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	return 0;
}
