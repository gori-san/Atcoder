#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    int p[n], ans[n];
    REP(i, n) {
        cin >> p[i];
        if (p[i] != i + 1)
            c++;
    }
    if (c > 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
