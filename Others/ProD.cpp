#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static long long MAX = 	9223372036854775800;
int N,M;

struct d{
  int l;
  int r;
  int c;
};

ll graph(int ptr, ll cost, vector<d> D){
  int tmp = ptr + 1;
  long long res = MAX;
  if(D[ptr].r == N) return cost + D[ptr].c;
  for(int i = ptr + 1; D[i].l <= D[ptr].r && i < M; i++){
    if(D[i].l == D[ptr].l) continue;
    ll t = graph(i, cost + D[ptr].c, D);
    res = min(res, t);
  }
  return res;
}

int main(){
  cin >> N >> M;
  vector<d> D(M);
  bool flag1 = false;
  bool flag2 = false;
  for(int i = 0; i < M; i++){
    cin >> D[i].l >> D[i].r >> D[i].c;
    if(D[i].l == 1) flag1 = true;
    if(D[i].r == N) flag2 = true;
  }
  sort(D.begin(), D.end(), [](const d &a, const d &b) {return a.l < b.l;});
  ll r = MAX;
  if(flag1 && flag2){
  for(int i = 0; D[i].l == 1; i++){
    ll t = graph(i, 0, D);
    r = min(t, r);
  }
  if(r == MAX) cout << -1 << endl;
  else cout << r << endl;
  }else{
    cout << -1 << endl;
  }
}
