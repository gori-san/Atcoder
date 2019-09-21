#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a - b >= c)
        cout << 0 << endl;
    else
        cout << c - (a - b) << endl;
    return 0;
}
