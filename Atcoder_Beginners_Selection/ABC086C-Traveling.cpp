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
    vector<int> t(n, 0), x(n, 0), y(n, 0);
    REP(i, n) {
        cin >> t[i] >> x[i] >> y[i];
    }
    int temp_x = 0, temp_y = 0, temp_t = 0;
    string ans = "Yes";
    REP(i, n) {
        if ((t[i] - temp_t) < (abs(x[i] - temp_x) + abs(y[i] - temp_y))) {
            ans = "No";
            break;
        }
        if ((t[i] - temp_t) % 2 == 0 && (abs(x[i] - temp_x) + abs(y[i] - temp_y)) % 2 == 0) {
            continue;
        } else if ((t[i] - temp_t) % 2 != 0 && (abs(x[i] - temp_x) + abs(y[i] - temp_y)) % 2 != 0) {
            continue;
        } else {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
