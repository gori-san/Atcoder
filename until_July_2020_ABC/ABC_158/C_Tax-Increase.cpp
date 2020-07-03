#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <math.h>
#include <vector>
#include <deque>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main() {
    string s;
    deque<string> deq;
    int q;
    cin >> s >> q;
    deq.push_front(s);
    int head_flag = 1;
    int query1, query2;
    string query3;
    REP(i, q) {
        cin >> query1;
        if (query1 == 1) {
            head_flag *= -1;
            continue;
        }
        cin >> query2 >> query3;
        if (query2 == 1) {
            if (head_flag == 1) {
                deq.push_front(query3);
            } else {
                deq.push_back(query3);
            }
        } else {
            if (head_flag == 1) {
                deq.push_back(query3);
            } else {
                deq.push_front(query3);
            }
        }
    }
    if (head_flag == -1)
        reverse(deq.begin(), deq.end());
    REP(i, deq.size()) {
        cout << deq[i];
    }
    cout << endl;
    return 0;
}
