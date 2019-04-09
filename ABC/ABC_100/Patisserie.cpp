#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;
ll temp = 0;
int n;

void Func(int m, int c, ll sumx, ll sumy, ll sumz, ll x[], ll y[], ll z[]);

int main(){
	int m;
	cin >> n >> m;
	ll x[n], y[n], z[n] , ans = 0;
	REP(i,n){
		cin >> x[i] >> y[i] >> z[i];
	}
	Func(m,0,0,0,0,x,y,z);
	cout << temp << endl;
	return 0;
}

void Func(int m, int c, ll sumx, ll sumy, ll sumz, ll x[], ll y[], ll z[]){
	if(m == 0){
		temp = max(temp,abs(sumx)+abs(sumy)+abs(sumz));
		return;
	}
	if(n - c < m){
		return;
	}
	Func(m-1,c+1,sumx+x[c],sumy+y[c],sumz+z[c],x,y,z);
	Func(m,c+1,sumx,sumy,sumz,x,y,z);
	return;
}
