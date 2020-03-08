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
    ll n, a, b;
    cin >> n >> a >> b;
    cout << (n / (a + b)) * a + min(a, n % (a + b)) << endl;
    return 0;
}
