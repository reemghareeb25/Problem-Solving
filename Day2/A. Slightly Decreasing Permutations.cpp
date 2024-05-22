/*
https://codeforces.com/contest/285/submission/262115770
Rating: 1110 - greedy & implementation
o(n)
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
    int n, k; cin >> n >> k;
    int i;
    for(i = 1; i<= n-k-1; i++)
        cout << i << ' ';
    for(int j = n; j >= i; j--)
        cout << j << ' ';
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