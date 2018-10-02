#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	string s, t, temp = "A";
	int sloc, tloc;
	cin >> s >> t;
	REP(i, s.size()){
		if(temp.find(s[i]) > temp.size()) {
			temp = temp + s[i];
			FOR(j,i+1,s.size()){
				sloc = s.find(s[i], j);
				tloc = t.find(t[i], j);
				if(sloc <= s.size() || tloc <= t.size()){
					if(s[i] != s[tloc] || t[i] != t[sloc]){
						cout << "No" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}



// int main(){
// 	string s, t, temp = "A";
// 	cin >> s >> t;
// 	REP(i, s.size()){
// 		FOR(j,i+1,s.size()){

// 			if(s[i] == s[j]){
// 				if(t[i] != t[j]){
// 					cout << "No" << endl;
// 					return 0;
// 				}
// 			}else if(t[i] == t[j]){
// 				if(s[i] != s[j]){
// 					cout << "No" << endl;
// 					return 0;
// 				}
// 			}
// 		}
// 	}
// 	cout << "Yes" << endl;
// 	return 0;
// }
