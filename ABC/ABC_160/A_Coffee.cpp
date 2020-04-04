#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <math.h>
#include <vector>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[2] == s[3] && s[4] == s[5])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
