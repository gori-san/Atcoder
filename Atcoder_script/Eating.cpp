#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int t = 0;
	char s[4];
	REP(i,4){
		cin >> s[i];
		if(s[i] == '+'){
			t++;
		}else{
			t--;
		}
	}
	cout << t << endl;
	return 0;
}
