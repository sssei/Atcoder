#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int H,W,D;
  cin >> H >> W >> D;
  vector<pair<int,int>> Grid(H*W+1);
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      int a;
      cin >> a;
      Grid[a].first = i + 1;
      Grid[a].second = j + 1;
    }
  }
  vector<ll> Sum(H*W+1);
  for(int i = 1; i <= H*W; i++){
    if(i <= D){
      Sum[i] = 0;
    }else{
      Sum[i] = Sum[i-D] + abs(Grid[i].first - Grid[i-D].first) + abs(Grid[i].second - Grid[i-D].second);
    }
  }
  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    int l,r;
    cin >> l >> r;
    int res = Sum[r] - Sum[l];
    cout << res << endl;
  }
}
