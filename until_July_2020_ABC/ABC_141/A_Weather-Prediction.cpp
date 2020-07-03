#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    string s;
    cin >> s;
    if(s == "Sunny") cout << "Cloudy" << endl;
    else if(s == "Cloudy") cout << "Rainy" << endl;
    else cout << "Sunny" << endl;
    return 0;
}
