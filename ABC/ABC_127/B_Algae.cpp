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
    int r, d, x;
    cin >> r >> d >> x;
    int x_prev = x;
    REP(i, 10)
    {
        cout << r * x_prev - d << endl;
        x_prev = r * x_prev - d;
    }
    return 0;
}
