/*
https://codeforces.com/problemset/problem/118/B
Rating: 1000 - implementation & constructive algorithms
o(n^3) -> 2 <= n <= 9
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
    vector<int> vec[n+1];
    for(int i=0; i<= n; i++){
        vector<int> v;
        for(int j = 0; j<(n-i)*2; j++)
            cout << " ", vec[i].push_back(-1);
        for(int j=0; j<= i; j++) {
            if(i == 0)
                cout << j, v.push_back(j), vec[i].push_back(j);
            else
                cout << j << ' ', v.push_back(j), vec[i].push_back(j);
        }
        reverse(all(v));
        for(int j=1; j<v.size(); j++) {
            if(j == v.size()-1)
                cout << v[j], vec[i].push_back(v[j]);
            else
                cout << v[j] << ' ', vec[i].push_back(v[j]);
        }
        cout << '\n';
    }
    for(int i = n-1; i >= 0; i--){
        for(int j=0; j<vec[i].size(); j++){
            if(vec[i][j] == -1)
                cout << " ";
            else {
                if(j == vec[i].size()-1)
                    cout << vec[i][j];
                else
                    cout << vec[i][j] << " ";
            }
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