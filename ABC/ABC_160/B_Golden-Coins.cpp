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
    int x;
    cin >> x;
    cout << x / 500 * 1000 + x % 500 / 5 * 5 << endl;

    return 0;
}
