#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int sum = 0;
	ll n, temp;
	cin >> n;
	temp = n;
	while(temp > 0){
		sum += temp % 10;
		temp /= 10;
	}
	if(n % sum == 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}
