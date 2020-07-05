#include <algorithm>
#include <array>
#include <deque>
#include <functional>
#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    int ac = 0, wa = 0, tle = 0, re = 0;
    REP(i, n) {
        cin >> s[i];
        if (s[i] == "AC") {
            ac++;
        } else if (s[i] == "WA") {
            wa++;
        } else if (s[i] == "TLE") {
            tle++;
        } else {
            re++;
        }
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}
