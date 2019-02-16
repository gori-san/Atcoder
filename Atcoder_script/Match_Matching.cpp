#include<iostream>
#include<math.h>
#include<algorithm>
#include<numeric>
#include <type_traits>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

int main(){
	int n, m;
    cin >> n >> m;
    int a[m];
    bool isNum[9];
    int minIn = 10; 
    REP(i,m){
        cin >> a[i];
        switch (a[i])
        {
            case 1:
                isNum[0] = true;
                minIn = min(minIn,2);
                break;
            case 2:
                isNum[1] = true;
                minIn = min(minIn,5);
                break;
            case 3:
                isNum[2] = true;
                minIn = min(minIn,5);
                break;
            case 4:
                isNum[3] = true;
                minIn = min(minIn,4);
                break;
            case 5:
                isNum[4] = true;
                minIn = min(minIn,5);
                break;
            case 6:
                isNum[5] = true;
                minIn = min(minIn,6);
                break;
            case 7:
                isNum[6] = true;
                minIn = min(minIn,3);
                break;
            case 8:
                isNum[7] = true;
                minIn = min(minIn,7);
                break;
            case 9:
                isNum[8] = true;
                minIn = min(minIn,6);
                break;
        }
    }

    if(isNum[0] == true){
        if(n%2 == 0){
            REP(i,n/2){
                cout << 1;
            }
        }else{
            int temp = n;
            if(isNum[6] == true){
                temp -= 3;
                cout << 7;
            }else if(isNum[4] == true){
                temp -= 5;
                cout << 5;
            }else if(isNum[2] == true){
                temp -= 5;
                cout << 3;
            }else if(isNum[1] == true){
                temp -= 5;
                cout << 2;
            }else{
                temp -= 7;
                cout << 8;
            }
            REP(i,temp/2){
                cout << 1;
            }
        }
        cout << endl;
        return 0;
    }

    int maxDigits = n/minIn + 1;
    for(int i = maxDigits; i > 1; i--){
        
    }
	return 0;
}
