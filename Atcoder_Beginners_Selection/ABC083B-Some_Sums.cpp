#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    REP(i, n + 1) {
        int quo = i, rem = 0, sum = 0;
        while (quo >= 1) {
            rem = quo % 10;
            quo /= 10;
            sum += rem;
        }
        if (sum >= a && sum <= b) {
            // cout << i << endl;
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
