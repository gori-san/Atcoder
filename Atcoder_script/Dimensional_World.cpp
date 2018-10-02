#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	int x[N], y[M], xmax = -200, ymin = 200, z;
	REP(i,N){
		cin >> x[i];
		xmax = max(xmax, x[i]);
	}
	REP(i,M){
		cin >> y[i];
		ymin = min(ymin, y[i]);
	}
	z = xmax;
	while(++z <= ymin){
		if(z > X && z <= Y) {
			cout << "No War" << endl;
			return 0;
		}
	}
	cout << "War" << endl;
	return 0;
}
