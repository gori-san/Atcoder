#include <iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main()
{
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    float ans = float(w * h) / 2;
    cout << fixed << setprecision(10);
    if (x * 2 == w && y * 2 == h)
        cout << ans << ' ' << 1 << endl;
    else
        cout << ans << ' ' << 0 << endl;
    return 0;
}
