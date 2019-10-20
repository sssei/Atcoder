#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector< pair<int,int> > G[400];
int visited[400] = {};
int L;

int search(int s, int t, int fuel, int cnt, bool d){
  visited[s] = 1;
  if(s == t){
    return cnt;
  }
  int res = 100000000;
  bool flag = false;
  for(auto x: G[s]){
    if(visited[x.first] == 0){
      int f = 0;
      int tmp;
      if(x.second > fuel){
	tmp = search(x.first, t, L-x.second, cnt + 1, d);	
      }else{
	tmp = search(x.first, t, fuel-x.second, cnt, d);
      }
      if(tmp == -1) continue;
      flag = true;
      res = min(tmp, res);
    }
  }
  if(flag == false) return -1;
  return res;
}

int main(){
  int N,M;
  cin >> N >> M >> L;

  for(int i = 0; i < M; ++i){
    int s,t,c;
    pair<int,int> p,q;
    cin >> s >> t >> c;
    if(c > L) continue;
    s--;
    t--;
    p.first = s;
    p.second = c;
    q.first = t;
    q.second = c;
    G[s].push_back(q);
    G[t].push_back(p);
  }

  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    int s,t;
    cin >> s >> t;
    s--; t--;
    for(int j = 0; j < N; j++){
      visited[j] = 0;
    }
    cout << search(s,t,L,0,true) << endl;
  }
}
