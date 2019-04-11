#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)
#define INF 1000000000000001

using namespace std;

int main()
{
    ll n, num_people[5], ans = 0;
    ll min_num = INF;
    cin >> n;
    REP(i,5){
        cin >> num_people[i];
        if(num_people[i] < min_num) min_num = num_people[i];
    }
    if(n % min_num == 0){
        ans = 5 + (n / min_num - 1);
    }else{
        ans = 5 + (n / min_num);
    }
    cout << ans << endl;
    return 0;
}
