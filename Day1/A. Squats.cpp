/*
https://codeforces.com/problemset/problem/424/A
Rating: 900 - implementation
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
    int n; cin >> n;
    string s; cin >> s;
    int sm = 0, cap = 0, X = 0, x = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'x')
            sm++;
        else
            cap++;
    }
    if(sm > cap){
        x = (n/2) - cap;
        X = x;
        for(int i=0; x != 0; i++){
            if(s[i] == 'x'){
                s[i] = 'X', x--;
            }
        }
    }else if(sm < cap){
        x = (n/2) - sm;
        X = x;
        for(int i=0; x != 0; i++){
            if(s[i] == 'X'){
                s[i] = 'x', x--;
            }
        }
    }
    cout << X << '\n' << s << '\n';
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
