#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    if (n % (d * 2 + 1) == 0)
        cout << n / (d * 2 + 1) << endl;
    else
        cout << n / (d * 2 + 1) + 1 << endl;

    return 0;
}
