#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int d;
	long long int g;
	cin >> d >> g;
	int p[d];
	long long int c[d];
	REP(i,d){
		cin >> p[i] >> c[i];
	}
	int min = 1000, score;
	REP(i,d){
		score = p[i]*(i+1)*100+c[i];
		if(min > p[i]){
			if(score )
		}
	}

	return 0;
}
