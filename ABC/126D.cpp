#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int limits = 100010;
int N;
vector<int> odd[limits];
vector<int> even[limits];
vector<int> color(limits, 0);

void dfs(int n, int c){
  color[n] = c;
  for(auto x: odd[n]){
    if(color[x] == 0){
      dfs(x, -c);
    }
  }
  for(auto x: even[n]){
    if(color[x] == 0){
      dfs(x, c);
    }
  }
}

int main(){
  cin >> N;
  int u,v,w;
  for(int i = 0; i < N-1; ++i){
    cin >> u >> v >> w;
    u--; v--;
    if(w%2 == 0){
      even[u].push_back(v);
      even[v].push_back(u);
    }else{
      odd[u].push_back(v);
      odd[v].push_back(u);
    }
  }
  dfs(0, 1);
  for(int i = 0; i < N; ++i){
    if(color[i] == 1){
      cout << 1 << endl;
    }else{
      cout << 0 << endl;
    }
  }
  
}
