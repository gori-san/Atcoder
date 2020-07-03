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
    if (n * a >= b)
        cout << b << endl;
    else
        cout << n * a << endl;

    return 0;
}
