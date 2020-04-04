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
    int k, n;
    cin >> k >> n;
    int a[n], max_dist = 0;
    cin >> a[0];
    REP1(i, n) {
        cin >> a[i];
        max_dist = max(max_dist, a[i] - a[i - 1]);
    }
    max_dist = max(max_dist, a[0] + k - a[n - 1]);
    cout << k - max_dist << endl;

    return 0;
}
