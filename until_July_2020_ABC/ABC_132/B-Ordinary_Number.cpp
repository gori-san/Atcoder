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
    int p[n];
    REP(i, n)
    {
        cin >> p[i];
    }
    int c = 0;
    FOR(i, 1, n)
    {
        if (p[i - 1] < p[i] && p[i] < p[i + 1])
            c++;
        else if (p[i - 1] > p[i] && p[i] > p[i + 1])
            c++;
    }
    cout << c << endl;
    return 0;
}
