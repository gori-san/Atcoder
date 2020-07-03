#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;
bool a[1000000];
int main()
{
    ll n, m;
    cin >> n >> m;
    REP(i, m)
    {
        int x;
        cin >> x;
        a[x] = true;
    }
    ll dp[n + 1];
    dp[0] = 1;

    if (a[1])
        dp[1] = 0;
    else
        dp[1] = 1;
    FOR(i, 2, n + 1)
    {
        if (a[i])
            dp[i] = 0;
        else
            dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    }
    cout << dp[n] << endl;
    return 0;
}
