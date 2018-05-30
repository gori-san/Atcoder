#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, count, max=-1,flag = 1;
	cin >> n;
	char s[n];
	REP(i,n) cin >> s[i];
	REP(i,n){
		count = 0;
		REP1(j,i+1){
			for(int k = i+1; k < n; k++){
				flag = 1;
				REP(c,j-1){
					if(s[c] == s[j-1]) {
						flag=0;
						break;
					}
				}
				if(s[j-1] == s[k] && flag==1){
					 count++;
					 break;
				}
			}
		}
		if(count > max) max = count;
	}
	cout << max << endl;
	return 0;
}