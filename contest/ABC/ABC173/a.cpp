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
    int n;
    cin >> n;
    if (n % 1000 == 0) {
        cout << 0 << endl;
    } else {
        cout << 1000 - (n % 1000) << endl;
    }
    return 0;
}
