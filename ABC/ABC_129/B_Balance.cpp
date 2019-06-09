#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main()
{
    int n;
    cin >> n;
    int w[n];
    int all_w = 0, ans = 1000000000;
    REP(i, n)
    {
        cin >> w[i];
        all_w += w[i];
    }
    int s1 = 0, s2 = all_w;
    REP(i, n)
    {
        s1 += w[i];
        s2 -= w[i];
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans;
    return 0;
}
