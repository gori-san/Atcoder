#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;
ll n;

int main()
{
    // ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;
        if (i - 1 > n / i)
            ans += i - 1;
        if (n / i == i)
            continue;
        if (n / i - 1 > i)
            ans += n / i - 1;
    }
    cout << ans << endl;
    return 0;
}