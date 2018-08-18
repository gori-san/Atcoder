#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int N, M, Q;
	cin >> N >> M >> Q;
	int l[M], r[M], p[Q], q[Q], train[M], city[Q];
	REP(i,M){
		cin >> l[i] >> r[i];
		train[i] = r[i] - l[i];
	}
	REP(i,Q){
		cin >> p[i] >> q[i];
		city[i] = q[i] - p[i];
	}
	int c;
	int a, b;
	REP(i,Q){
		c = 0;
		a = p[i];
		b = q[i];
		while(a <= b)
	}
	return 0;
}
