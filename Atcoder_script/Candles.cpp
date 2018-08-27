#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int x[n];
	REP(i,n){
		cin >> x[i];
	}
	int a = 0;
	while(x[a] < 0){
		a++;
	}
	cout << a << endl;;
	int count = 0;
	int tempA = 1000000000;
	int tempB;
	if(x[a] == 0) k--;
	if(a >= k){
		tempB = abs(x[a-k])*2;
		tempA = min(tempA, tempB);
		cout << tempA << endl;
		count++;
		while(count <= k-1 && a+count < n){
			tempB = min( abs(x[a-k+count])*2 + x[a+count-1], abs(x[a-k+count]) + 2*x[a+count-1]);
			tempA = min(tempA, tempB);
			cout << tempA << endl;
			count++;
		}
		if(count < k && a+count < n){
			tempB = abs(x[a+k]);
			tempA = min(tempB,tempA);
			cout << tempA << endl;
		}
	}else{
		while(count <= a-1 && k-a+count < n){
			tempB = min( abs(x[count])*2 + x[k-a+count+1], abs(x[count]) + 2*x[k-a+count+1]);
			cout << tempB << endl;

			tempA = min(tempA, tempB);
			cout << tempA << endl;
			count++;
		}
		if(count <= a && k-a+count < n){
			tempB = abs(x[a+k-1]);
			tempA = min(tempB,tempA);
			cout << tempA << endl;
		}
	}
	cout << tempA << endl;
	return 0;
}
