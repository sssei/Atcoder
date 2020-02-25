#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int BFS(vector<string> v, int x, int y, int gx, int gy){
  int H = v.size(), W = v[0].size();
  vector<vector<int>> dist(H, vector<int>(W, -1));
  queue<pair<int,int>> que;

  int res = 0;
  que.push({x,y});
  dist[x][y] = 0;
  while(!que.empty()){
    int x = que.front().first;
    int y = que.front().second;
    res = max(res, dist[x][y]);
    que.pop();
    for(int dir = 0; dir < 4; dir++){
      int nx = x + dx[dir], ny = y + dy[dir];
      if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      if(v[nx][ny] == '#') continue;
      if(dist[nx][ny] == -1){
	dist[nx][ny] = dist[x][y] + 1;
	que.push({nx, ny});
      }
    }
  }
  return dist[gx][gy];
}

int main(){
  int R,C;
  cin >> R >> C;
  int sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  vector<string> c(R);
  for(int i = 0; i < R; i++){
    cin >> c[i];
  }
  cout << BFS(c, sx-1, sy-1, gx-1, gy-1) << endl;

}
