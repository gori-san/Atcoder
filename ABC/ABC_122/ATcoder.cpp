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
    string s;
    cin >> s;
    int count, m = 0;
    REP(i, s.size())
    {
        count = 0;
        FOR(j, i, s.size())
        {
            if (s[j] != 'A' && s[j] != 'G' && s[j] != 'T' && s[j] != 'C')
            {
                //cout << "miss" << endl;
                m = max(m, count);
                continue;
            }
            else
            {
                //cout << "+1" << endl;
                count++;
            }
        }
    }
    cout << m << endl;
    return 0;
}
