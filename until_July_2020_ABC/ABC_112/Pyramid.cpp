#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n;
	cin >> n;
	int x[n], y[n], h[n], hans = 0;
	REP(i,n){
		cin >> x[i] >> y[i] >> h[i];
		hans = max(hans, h[i]);
	}
	int c = 0, cx = 0, cy = 0;
	for(int i = hans; i < 1000000000; i++){
		for(cx = 0; cx < 100; cx++){
			for(cy = 0; cy < 100; cy++){
				c = 0;
				for(int j = 0; j < n; j++){
					if(max((i - abs(x[j]-cx) - abs(y[j]-cy)),0) == h[j]) c++;
				}
				if(c == n){
					cout << cx << " " << cy << " " << i << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
