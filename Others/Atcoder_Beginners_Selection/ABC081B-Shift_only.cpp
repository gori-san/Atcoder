#include <algorithm>
#include <iostream>
#include <math.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    REP(i, n)
    cin >> a[i];

    int c = 0, flag = 1;
    while (true) {
        REP(i, n) {
            if (a[i] % 2 != 0) {
                flag = 0;
                break;
            } else {
                a[i] /= 2;
            }
        }
        if (flag == 0)
            break;
        else
            c += 1;
    }

    cout << c << endl;
    return 0;
}
