/*
https://codeforces.com/problemset/problem/448/A
Rating: 800 - implementation
o(1)
*/

#include <bits/stdc++.h>
using namespace std;
void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
#define ll long long
#define int long long
#define all(v) ((v).begin()), ((v).end())
const int N = 2e5 + 3, M = 2e3 + 3;
#define  clr(v, d) memset(v, d, sizeof(v))
void solve() {
    int a, b, c;
    int sum1 = 0, sum2 = 0;
    cin >> a >> b >> c;
    sum1 += a + b + c;
    cin >> a >> b >> c;
    sum2 += a + b + c;
    int n; cin >> n;
    if(ceil((sum1*1.0) / 5) + ceil((sum2*1.0)/10) > n)
        cout << "NO\n";
    else
        cout << "YES\n";
}

signed main() {
    InOutFast();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}