#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int limits = 50;
int N,M;
bool visited[limits];
vector< vector<int> > adj(limits, vector<int>(limits, 0));

void clear(){
  for(int i = 0; i < N; i++){
    visited[i] = false;
  }
}

bool check(){
  bool flag = true;
  for(int i = 0; i < N; i++){
    if(visited[i] == false) flag = false;
  }
  return flag;
}

void dfs(int n){
  visited[n] = true;
  for(int i = 0; i < N; i++){
    if(adj[n][i] == 1 && visited[i] == false){
      dfs(i);
    }
  }
}

int main(){
  cin >> N >> M;

  int edge[M][2];
  int cnt = 0;
  for(int i = 0; i < M; i++){
    cin >> edge[i][0] >> edge[i][1];
    edge[i][0]--; edge[i][1]--;
    adj[edge[i][0]][edge[i][1]] = 1;
    adj[edge[i][1]][edge[i][0]] = 1;
  }
  
  for(int i = 0; i < M; i++){
    clear();
    adj[edge[i][0]][edge[i][1]] = 0;
    adj[edge[i][1]][edge[i][0]] = 0;
    dfs(0);
    // cout << "i= " << i + 1 << endl;
    // for(int j = 0; j < N; j++){
    //   if(visited[j]) cout << j + 1 << " ";
    // }
    // cout << endl;
    if(!check()){
       cnt++;
    //   cout << "Yes " << i + 1 << endl;
    } 
    adj[edge[i][0]][edge[i][1]] = 1;
    adj[edge[i][1]][edge[i][0]] = 1;
  }

  cout << cnt << endl;
  
}
