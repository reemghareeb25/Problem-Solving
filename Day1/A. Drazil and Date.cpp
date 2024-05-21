/*
https://codeforces.com/contest/515/problem/A
Rating: 1000 - math
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
void print(int n){
    for(int i=0; i< n; i++)
        cout << 'O';
    cout << '-';
    for(int i=0; i<4-n; i++)
        cout << 'O';
}
void solve() {
    int a, b, s; cin >> a >> b >> s;
    a = abs(a), b = abs(b);
    if(a+b > s)
        cout << "No";
    else{
        if((s - (a+b))% 2 == 0)
            cout << "Yes";
        else
            cout << "No";
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