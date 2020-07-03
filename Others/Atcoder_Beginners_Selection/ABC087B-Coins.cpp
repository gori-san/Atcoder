#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    REP(i, a + 1) {
        REP(j, b + 1) {
            REP(k, c + 1) {
                if (500 * i + 100 * j + 50 * k == x)
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
