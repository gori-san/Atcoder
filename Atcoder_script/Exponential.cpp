#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int x, tmp, max = 1;
	cin >> x;
	FOR(i,2,32){
		tmp = i*i;
		while(1){
			if(tmp > x){
				break;
			}else if(tmp * i > x){
				if(tmp > max) max = tmp;
				break;
			}
			tmp *= i;
		}
	}
	cout << max << endl;
	return 0;
}