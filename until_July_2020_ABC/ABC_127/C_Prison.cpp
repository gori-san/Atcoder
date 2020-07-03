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
    int n, m;
    cin >> n >> m;
    int l[m], r[m];
    int l_max = 0, r_min = 1000000;
    REP(i, m)
    {
        cin >> l[i] >> r[i];
        l_max = max(l_max, l[i]);
        r_min = min(r_min, r[i]);
    }
    if (r_min - l_max + 1 <= 0)
        cout << 0 << endl;
    else
        cout << r_min - l_max + 1 << endl;
    return 0;
}
