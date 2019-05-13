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
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int ans = 0;
    REP(r, N / R + 1)
    {
        if (r * R > N)
            break;
        REP(g, N / G + 1)
        {
            if (r * R + g * G > N)
                break;
            if ((N - (r * R + g * G)) % B == 0)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}