#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> G[N];
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for(int i = 0; i < N; i++){
    vector<int> F(N);
    F[i] = -1;
    for(auto x: G[i]){
      F[x] = -1;
    }
    for(auto x: G[i]){
      for(auto y: G[x]){
	if(F[y] != -1){
	  F[y] = 1;
	}
      }
    }
    int res = 0;
    for(int j = 0; j < N; j++){
      if(F[j] == 1){
	res++;
      }
    }
    cout << res << endl;
  }
}
