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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    REP(i, n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int alice = 0, bob = 0;
    REP(i, n) {
        if (i % 2 == 0)
            alice += a[i];
        else
            bob += a[i];
    }
    cout << alice - bob << endl;
    return 0;
}
