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
	long long int num = 0;
	int c = 0, q = 0, k, l;
	cin >> s;
	for(int a = 0; a < s.size(); a++){
		if(s[a] == 'C') c++;
		if(s[a] == '?') q++;
	}
	cout << c << endl;
	for(int i = 0; i < s.size()-2; i++){
		if(s[i] == 'C') c--;
		if(s[i] == '?') {
			q--;
			l++;
		}
		if(s[i] == 'A' || s[i] == '?'){
			k = 0; l = 0;
			for(int j = i+1; j < s.size()-1; j++){
				if(s[j] == 'C'){
					c--;
					k++;
				}
				if(s[j] == '?'){
					q--;
					l++;
				}
				if(s[j] == 'B' || s[j] == '?'){
					num += (c+q)*pow(3,q);
				}
			}
			c += k+1; q += l+1;
		}
	}
	cout << num % (1000000000+7) << endl;
	return 0;
}
