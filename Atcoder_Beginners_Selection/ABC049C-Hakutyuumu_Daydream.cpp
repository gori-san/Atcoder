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
    bool ans = false;
    while (1) {
        // cout << s << " " << s.length() << endl;
        if (s.length() == 0)
            ans = true;
        if (s.length() >= 7 && s.substr(s.length()-7, 7) == "dreamer") {
            s = s.substr(0, s.length() - 7);
        } else if (s.length() >= 6 && s.substr(s.length()-6, 6) == "eraser") {
            s = s.substr(0, s.length() - 6);
        } else if (s.length() >= 5 && (s.substr(s.length()-5, 5) == "dream" || s.substr(s.length()-5, 5) == "erase")) {
            s = s.substr(0, s.length() - 5);
        } else {
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
