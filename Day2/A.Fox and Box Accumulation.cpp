/*
https://codeforces.com/contest/388/problem/A
Rating: 1400, greedy & sorting
o(n^2)
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
int a[102], n;
bool check(int num){
    int cur[num];
    fill(cur, cur + num, 2e9);
    for(int i=0; i<n; i++){
        int ind = i%num;
        if(cur[ind] == 0)
            return false;
        cur[ind] = min(cur[ind] - 1, a[i]);
    }
    return true;
}
void solve() {
    cin >> n;
    int c = 0;
    for(int i=0; i< n; i++)
        cin >> a[i];
    sort(a, a+n);
    reverse(a, a+n);
    for(int i=1; i<= n; i++){
        if(check(i)){
            cout << i;
            break;
        }
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