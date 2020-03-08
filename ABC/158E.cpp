#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 998244353;

vector<pair<ll,ll>> G;
vector<ll> R[1000000];

ll dfs(ll s){
  if(R[s].size() == 0){
    return 2;
  }
  for(auto x: R[s]){
    
  }
}

int main(){
  ll N; cin >> N;
  G.resize(N);
  for(int i = 0; i < N; i++){
    cin >> G[i].first >> G[i].second;
  }
  sort(G.begin(), G.end());

  for(int i = 0; i < N; i++){
    int j = i + 1;
    while(j < N && G[i].first + G[i].second < G[j].first){
      R[i].push_back(j);
      j++;
    }
  }
}
