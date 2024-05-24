/*
https://codeforces.com/contest/520/problem/B
Rating 1400 - dfs and similar graphs, greedy, implementation, math, shortest paths
o(nlogn)
*/
#include <bits/stdc++.h>
using namespace std;
void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
#define ll long long
#define all(v) ((v).begin()), ((v).end())
const int N = 1e5+5;
bool vis[N];
queue<int> q;
int n, m;
int BFS(){
    q.push(n);
    int level = 0, size;
    while(!q.empty()){
        size = q.size();
        while(size--){
            int f = q.front();
            q.pop();
            vis[f] = true;
            if(f == m)
                return level;
            if(!vis[f-1] && f > 1)
                q.push(f-1);
            if(!vis[f*2] && f < m)
                q.push(f*2);
        }
        level++;
    }
}
void solve() {
    cin >> n >> m;
    cout << BFS();
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