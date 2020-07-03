#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0, before = 1;
    while (before < b) {
        ans++;
        before += a - 1;
    }
    cout << ans << endl;
    return 0;
}
