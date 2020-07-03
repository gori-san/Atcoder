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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> ans(n, 0);
    REP1(i, n + 1) {
        FOR(j, i + 1, n + 1) {
            ans[min(abs(i - j), min(abs(x - i) + 1 + abs(j - y), abs(y - i) + 1 + abs(j - x))) - 1]++;
            // cout << min(abs(i - j), min(abs(x - i) + 1 + abs(j - y), abs(y - i) + 1 + abs(j - x))) << " ";
        }
    }
    REP(i, n - 1) {
        cout << ans[i] << endl;
    }

    return 0;
}
