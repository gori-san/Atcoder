#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length(), one_first = 0, zero_first = 0;
    REP(i,n){
        if(i % 2 == 0){
            if(s[i] == '1') zero_first++;
            else one_first++;
        }else{
            if(s[i] == '0') zero_first++;
            else one_first++;
        }
    }
    cout << min(one_first, zero_first) << endl;
    return 0;
}
