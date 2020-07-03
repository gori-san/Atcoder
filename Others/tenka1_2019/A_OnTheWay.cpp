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
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= c && b >= c) cout << "Yes" << endl;
    else if(b <= c && a >= c) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
