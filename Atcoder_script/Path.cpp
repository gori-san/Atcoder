#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int a[3], b[3];
    int c1=0, c2=0, c3=0, c4=0;
    REP(i,3){
        cin >> a[i] >> b[i];
        switch(a[i]){
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
        }
        switch(b[i]){
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
        }
    }
    if(c1 >= 3 || c2 >= 3 || c3 >= 3 || c4 >= 3) cout << "NO" << endl;
    else cout << "YES" << endl;
	return 0;
}
