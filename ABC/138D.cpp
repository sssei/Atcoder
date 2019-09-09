#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,Q;
  cin >> N >> Q;
  vector<int> a(N-1),b(N-1),p(Q),x(Q);
  vector<int> adj[N];
  for(int i = 0; i < N-1; ++i){
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    adj[a[i]].push_back(b[i]);
    adj[b[i]].push_back(a[i]);
  }
  vector<int> cnt(N-1);
  for(int i = 0; i < Q; ++i){
    cin >> p[i] >> x[i];
    p[i]--;
    cnt[p[i]] += x[i];
  }
  deque<int> q;
  q.push_back(0);
  vector<int> vis(N);
  vis[0] = 1;
  while(!q.empty()){
    int u = q.front();
    q.pop_front();
    for(int i = 0; i < adj[u].size(); ++i){
      int t = adj[u][i];
      if(vis[t] == 1) continue;
      vis[t] = 1;
      cnt[t] += cnt[u];
      q.push_back(t);
    }
  }
  for(int i = 0; i < N-1; ++i){
    cout << cnt[i] << " ";
  }
  cout << cnt[N-1] << endl;
}
