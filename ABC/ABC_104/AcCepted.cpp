#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int c = 0;
	string s;
	cin >> s;
	if(s[0] != 'A') {
		cout << "WA" << endl;
		return 0;
	}
	if(s[1] >= 'A' && s[1] <= 'Z'){
		cout << "WA" << endl;
		return 0;
	}
	if(s[s.size()-1] >= 'A' && s[s.size()-1] <= 'Z'){
		cout << "WA" << endl;
		return 0;
	}
	for(int i = 2; i < s.size()-1; i++){
		if(s[i] == 'C') c++;
		else if(s[i] >= 'A' && s[i] <= 'Z'){
			cout << "WA" << endl;
			return 0;
		}
		if(c == 2){
			cout << "WA" << endl;
			return 0;
		}
	}
	if(c == 0){
		cout << "WA" << endl;
		return 0;
	}

	else cout << "AC" << endl;
	return 0;
}
