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
    int n, y;
    cin >> n >> y;
    int a = -1, b = -1, c = -1;
    REP(i, n + 1) {
        REP(j, n - i + 1) {
            if (10000 * i + 5000 * j + 1000 * (n - i - j) == y) {
                a = i;
                b = j;
                c = n - i - j;
            }
        }
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
