#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	string s;
	cin >> s;
	cout << s.find("A") << endl;
	cout << s.find("B") << endl;
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
