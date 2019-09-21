#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n;
    ll ans = 0;
    cin >> n;
    int a[n], b[n];
    REP(i, n + 1)
    cin >> a[i];
    REP(i, n)
    cin >> b[i];

    REP(i, n) {
        if (a[i] <= b[i]) {
            ans += a[i];
            b[i] -= a[i];
            a[i] = 0;
        } else {
            ans += b[i];
            a[i] -= b[i];
            b[i] = 0;
        }
        if (a[i + 1] <= b[i]) {
            ans += a[i + 1];
            b[i] -= a[i + 1];
            a[i + 1] = 0;
        } else {
            ans += b[i];
            a[i + 1] -= b[i];
            b[i] = 0;
        }
        // if (i == 0) {
        //     if (a[i] >= b[i]) {
        //         ans += b[i];
        //         a[i] -= b[i];
        //         b[i] == 0;
        //     } else {
        //         ans += a[i];
        //         b[i] -= a[i];
        //         a[i] = 0;
        //     }
        // } else if (i == n) {
        //     if (a[i] >= b[i - 1]) {
        //         ans += b[i - 1];
        //         a[i] -= b[i - 1];
        //         b[i - 1] = 0;
        //     } else {
        //         ans += a[i];
        //         b[i - 1] -= a[i];
        //         a[i] = 0;
        //     }
        // } else {
        //     if (a[i] >= b[i - 1]) {
        //         ans += b[i - 1];
        //         a[i] -= b[i - 1];
        //         b[i - 1] = 0;
        //     } else {
        //         ans += a[i];
        //         b[i - 1] -= a[i];
        //         a[i] = 0;
        //     }
        //     if (a[i] >= b[i]) {
        //         ans += b[i];
        //         a[i] -= b[i];
        //         b[i] = 0;
        //     } else {
        //         ans += a[i];
        //         b[i] -= a[i];
        //         a[i] = 0;
        //     }
        // }
    }
    cout << ans << endl;
    return 0;
}
