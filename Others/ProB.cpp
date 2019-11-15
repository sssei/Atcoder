#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define MAX 998244353

int main(){
  int N;
  cin >> N;
  vector<int> D(N);
  bool flag = true;
  for(int i = 0; i < N; i++){
    cin >> D[i];
  }
  vector<int> dis(N,0);
  if(D[0] != 0) flag = false;
  for(int i = 0; i < N; i++){
    dis[D[i]]++;
  }
  if(dis[0] != 1) flag = false;
  bool con = true;
  for(int i = 0; i < N; i++){
    if(con == false && dis[i] != 0) flag = false;
    if(dis[i] == 0) con = false;
  }
  ll res = 1;
  for(int i = 1; i < N; i++){
    for(int j = 0; j < dis[i]; j++){
      res *= dis[i-1];
      res = res % MAX;
    }
  }
  if(flag)  cout << res << endl;
  else cout << 0 << endl;
}
