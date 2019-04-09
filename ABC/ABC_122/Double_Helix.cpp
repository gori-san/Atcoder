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
    string b;
    cin >> b;
    if (b == "A")
        cout << "T" << endl;
    else if (b == "T")
        cout << "A" << endl;
    else if (b == "C")
        cout << "G" << endl;
    else
        cout << "C" << endl;

    return 0;
}
