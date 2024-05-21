/*
https://codeforces.com/problemset/problem/108/A
Rating: 1000 - implementation & strings
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
    vector<string> v = {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50", "10:01", "11:11", "12:21", "13:31", "14:41", "15:51", "20:02", "21:21", "22:22", "23:32"};
    string s; cin >> s;
    for(int i=0; i<v.size(); i++){
        if(v[i] > s){
            cout << v[i];
            return;
        }
    }
    cout << "00:00";
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