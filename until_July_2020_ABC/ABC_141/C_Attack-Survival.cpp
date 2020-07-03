#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    int a[q], cor[n];
    REP(i, n)
    cor[i] = 0;
    REP(i, q) {
        cin >> a[i];
        cor[a[i] - 1]++;
    }
    REP(i, n) {
        if (q - cor[i] >= k) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
