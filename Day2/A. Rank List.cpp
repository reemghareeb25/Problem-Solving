/*
https://codeforces.com/contest/166/problem/A
Rating: 1100 - binary search, implementation, sorting
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
bool sort4(pair<int, int> p1, pair<int, int> p2){
    if(p1.first > p2.first)
        return true;
    else if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    else
        return false;
}
void solve() {
    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v), sort4);
    pair<int, int> p = v[k-1];
    int c = 0;
    for(int i=0; i<n; i++){
        if(v[i] == p)
            c++;
    }
    cout << c;
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