#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int ans = 0;
    REP(i, s.length()) {
        if (s[i] == t[i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}
