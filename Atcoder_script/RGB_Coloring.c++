#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;
long long int c;

void Calc(int n, int a, int b, long long int k);

int main(){
	int n, a, b, ans;
	long long int k;
	c = 0;
	cin >> n >> a >> b >> k;
	Calc(n, a, b, k);
	cout << c % 998244353 << endl;
	return 0;
}

void Calc(int n, int a, int b, long long int k){
	if(k == 0){
		c++;
		return;
	}else if(n == 0){
		return;
	}else if(k < min(a, b)){
		return;
	}else if(k < max(a, b)){
		Calc(n - 1, a, b, k);
		Calc(n - 1, a, b, k - min(a, b));
		return;
	}else if(k < a + b){
		Calc(n - 1, a, b, k);
		Calc(n - 1, a, b, k - a);
		Calc(n - 1, a, b, k - b);
		return;
	}else{
		Calc(n - 1, a, b, k);
		Calc(n - 1, a, b, k - a);
		Calc(n - 1, a, b, k - b);
		Calc(n - 1, a, b, k - a - b);
		return;
	}
	return;
}