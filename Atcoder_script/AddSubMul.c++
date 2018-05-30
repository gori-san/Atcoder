#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if(a+b >= a-b && a+b >= a*b){
		cout << a+b << endl;
	}else if(a-b >= a+b && a-b >= a*b){
		cout << a-b << endl;
	}else{
		cout << a*b << endl;
	}
	return 0;
}