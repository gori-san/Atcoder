#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;
int _count = 0;

void Calc(int n, int a, int b, int k){
	if(k == 0){
		_count++;
		return;
	}else if(n == 0){
		return;
	}
	Calc(n - 1, a, b, k);
	Calc(n - 1, a, b, k - a);
	Calc(n - 1, a, b, k - b);
	Calc(n - 1, a, b, k - a - b);
}

int main(){
	int n, a, b, k, ans;
	cin >> n >> a >> b >> k;
	Calc(n, a, b, k);
	cout << _count << endl;
	return 0;
}