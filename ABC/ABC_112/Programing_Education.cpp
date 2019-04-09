#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, a, b;;
	cin >> n;
	if(n == 1) cout << "Hello World" << endl;
	else if(n == 2){
		cin >> a >> b;
		cout << a+b << endl;
	}
	return 0;
}
