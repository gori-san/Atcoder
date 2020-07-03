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
    cout << fixed << setprecision(10);
    if (x * 2 == w && y * 2 == h)
        cout << 1.0 * w * h / 2 << ' ' << 1 << endl;
    else
        cout << 1.0 * w * h / 2 << ' ' << 0 << endl;
    return 0;
}
