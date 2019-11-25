#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define MAX 100010

int N;
vector< pair<int, int> > G[MAX];
vector<int> visited(MAX, 0);

int main(){
  cin >> N;
  vector<int> node(N,0);
  vector<int> edge(N-1);
  int maxNode = 0;
  for(int i = 0; i < N-1; i++){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    node[a]++;
    node[b]++;
    G[a].push_back(make_pair(i, b));
    G[b].push_back(make_pair(i, a));
    int tmpMax = max(node[a], node[b]);
    maxNode = max(maxNode, tmpMax);
  }
  int K = maxNode;
  visited[0] = 1;
  queue<int> q;
  q.push(0);
  int color = 1;
  node[0] = 0;
  while(!q.empty()){
    int u = q.front();
    q.pop();
    int tmpColor = node[u];
    int i = 1;
    for(auto x: G[u]){
      int num = x.first;
      int next = x.second;
      if(visited[next] == 1){
	continue;
      }
      edge[num] = tmpColor + i;
      if(edge[num] > K){
	edge[num] -= K;
      }
      node[next] = edge[num];
      visited[next] = 1;
      q.push(next);
      i++;
    }
  }
  cout << K << endl;
  for(int i = 0; i < N-1; i++){
    cout << edge[i] << endl;
  }
}
