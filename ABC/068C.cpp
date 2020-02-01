#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;
int N;

vector<int> G[200004];

bool dfs(int p, int cnt){
  if(cnt > 2){
    return false;
  }
  if(p == N-1){
    return true;
  }
  for(auto x: G[p]){
    if(dfs(x, cnt+1) == true){
      return true;
    }
  }
  return false;
}

int main(){
  int M;
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    G[a-1].push_back(b-1);
  }
  if(dfs(0,0)){
    cout << "POSSIBLE" << endl;
  }else{
    cout << "IMPOSSIBLE" << endl;
  }
}
