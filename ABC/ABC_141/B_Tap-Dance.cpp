#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    string s;
    cin >> s;
    bool odd_flag = true, even_flag = true;
    REP(i, s.length()) {
        if (i % 2 == 0) {
            if (s[i] == 'L')
                odd_flag = false;
        } else {
            if (s[i] == 'R')
                even_flag = false;
        }
        if (!odd_flag && !even_flag)
            break;
    }
    //cout << odd_flag << " " << even_flag << endl;
    if (odd_flag && even_flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
