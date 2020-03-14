#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

#define MAX_V 1000000

struct edge{int to, cap, rev; };
vector<edge> G[MAX_V];
bool used[MAX_V];

void add_edge(int from, int to, int cap){
  G[from].push_back((edge){to, cap, G[to].size()});
  G[to].push_back((edge){from, 0, G[from].size() - 1});
}

int dfs(int v, int t, int f){
  if(v == t) return f;
  used[v] = true;
  for(int i = 0; i < G[v].size(); i++){
    edge &e = G[v][i];
    if(!used[e.to] && e.cap > 0){
      int d = dfs(e.to, t, min(f, e.cap));
      if(d > 0){
	e.cap -= d;
	G[e.to][e.rev].cap += d;
      }
    }
  }
}
int main(){
  
}
