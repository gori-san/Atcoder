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
    cin >> n;
    int a[n], b[n], c[n - 1];
    REP(i, n)
    cin >> a[i];
    REP(i, n)
    cin >> b[i];
    REP(i, n - 1)
    cin >> c[i];

    int ans = 0, before = 30;
    REP(i, n) {
        ans += b[a[i] - 1];
        if (before == a[i] - 1)
            ans += c[a[i] - 2];
        before = a[i];
    }
    cout << ans << endl;
    return 0;
}
