#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    if (d == 1) {
        cout << n * (n - 1) / 2 << endl;
        return 0;
    }
    int x[n][d];
    REP(i, n) {
        REP(j, d)
        cin >> x[i][j];
    }
    int ans = 0;
    REP(i, n) {
        FOR(j, i + 1, d) {
            float dist = 0;
            REP(k, d) {
                dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            dist = sqrt(dist);
            if (dist == floor(dist))
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
