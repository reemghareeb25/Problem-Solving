/*
https://codeforces.com/contest/414/problem/B
Rating: 1400 - combinatorics, dp, number theory
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
ll mod = 1e9 + 7;
ll mem[2010][2010], n;
ll go(ll num, int k){
    if(!k)
        return 1;
    if(mem[num][k] != -1)
        return mem[num][k];
    ll ret = 0;
    for(ll i = num; i<= n; i+= num)
        ret = (ret + go(i, k-1))%mod;
    return  mem[num][k] = ret;
}
void solve() {
    int k;
    cin >> n >> k;
    memset(mem, -1, sizeof mem);
    ll res = 0;
    for(int i=1; i<= n; i++)
        res = (res + go(i, k-1))%mod;
    cout << res << '\n';
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