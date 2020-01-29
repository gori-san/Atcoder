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
    int n;
    cin >> n;
    vector<int> d(n, 0);
    REP(i, n) {
        cin >> d[i];
    }
    sort(d.begin(), d.end(), greater<int>());
    int ans = 0, temp = 101;
    REP(i, n) {
        if (d[i] >= temp)
            continue;
        ans++;
        temp = d[i];
    }
    cout << ans << endl;
    return 0;
}
