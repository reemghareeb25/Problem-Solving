/*
https://codeforces.com/problemset/problem/439/A
Rating: 900 - implementation & greedy
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
    int n, x, d;
    cin >> n >> d;
    int sum = 0;
    for(int i=1; i<= n; i++){
        cin >> x;
        if(i != n)
            sum += (x+10);
        else
            sum += x;
    }
    if(sum > d)
        cout << -1;
    else{
        cout << (n-1)*2 + (d - sum)/5;
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