#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};
int H,W;
vector<string> s;

int bfs(int x, int y){
  vector<vector<ll>> dist(H, vector<ll>(W, -1));
  queue<pair<int,int>> que;
  dist[x][y] = 1;
  que.push(make_pair(x,y));
  while(!que.empty()){
    pair<int,int> n = que.front();
    int nx = n.first, ny = n.second;
    que.pop();
    for(int dir = 0; dir < 4; dir++){
      int nwx = nx + dx[dir];
      int nwy = ny + dy[dir];
      if(nwx < 0 || nwy < 0 || nwx >= W || nwy >= H) continue;
      if(s[nwy][nwx] == '#') continue;
      if(dist[nwy][nwx] == -1){
	dist[nwy][nwx] = dist[ny][nx] + 1;
      }else{
	continue;
      }      
      que.push(make_pair(nwx, nwy));
    }
  }
  // for(auto x: dist){
  //   for(auto y: x){
  //     cout << y << " ";
  //   }
  //   cout << endl;
  // }
  return dist[H-1][W-1];
}

int main(){
  cin >> H >> W;
  s.resize(H);
  int res = 0;
  for(int i = 0; i < H; i++){
    cin >> s[i];
    for(int j = 0; j < W; j++){
      if(s[i][j] == '#') res++;
    }
  }
  if(bfs(0,0) == -1){
    cout << -1 << endl;
  }else{
    cout << H * W - bfs(0,0) - res << endl;
  }

}
