/*
https://codeforces.com/problemset/problem/363/A
Rating: 800 - implementation
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
void print(int n){
    for(int i=0; i< n; i++)
        cout << 'O';
    cout << '-';
    for(int i=0; i<4-n; i++)
        cout << 'O';
}
void solve() {
    string s; cin >> s;
    reverse(all(s));
    for(int i=0; i<s.size(); i++) {
        int n = s[i] - '0';
        if (n < 5) {
            cout << "O-|";
            print(n);
        } else {
            cout << "-O|";
            print(n - 5);
        }
        cout << '\n';
    }
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