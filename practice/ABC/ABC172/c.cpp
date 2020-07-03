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
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m], pa[n + 1], pb[m + 1];
    pa[0] = 0;
    pb[0] = 0;
    REP(i, n) {
        cin >> a[i];
        pa[i + 1] = a[i] + pa[i];
    }
    REP(i, m) {
        cin >> b[i];
        pb[i + 1] = b[i] + pb[i];
    }

    ll ans = 0;
    ll checkpoint_b = m;
    REP(i, n + 1) {
        if (pa[i] > k)
            break;
        while (pb[checkpoint_b] > k - pa[i]) {
            checkpoint_b--;
        }
        ans = max(ans, i + checkpoint_b);
    }
    cout << ans << endl;
}
