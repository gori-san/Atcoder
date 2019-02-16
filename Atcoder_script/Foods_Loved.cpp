#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, m;
    cin >> n >> m;
    int k[n], a[n][30];
    REP(i,n){
        REP(j,30){
            a[i][j] = 100;
        }
    }
    REP(i,n){
        cin >> k[i];
        FOR(j,0,k[i]){
            cin >> a[i][j];
        }
    }

    int c1, c2 = 0;
    REP(i,m){
        c1 = 0;
        REP(j,n){
            REP(l,30){
                if(a[j][l] == i+1){ 
                    c1++;
                    //cout << j << " " << l << endl;
                }
            }
        }
        if(c1 == n) c2++;
        //cout << "haha" << endl;
    }
    cout << c2 << endl;
	return 0;
}
