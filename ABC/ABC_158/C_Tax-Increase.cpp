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
    int a, b;
    cin >> a >> b;
    REP1(i, 1099) {
        if (int(i * 0.08) != a || int(i * 0.1) != b)
            continue;
        cout << i << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}
