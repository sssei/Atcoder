#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,C;
  cin >> N >> C;
  int D[C][C];
  for(int i = 0; i < C; i++){
    for(int j = 0; j < C; j++){
      cin >> D[i][j];
    }
  }
  int c[N][N];
  vector<vector<int>> cost(3, vector<int>(C, 0));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> c[i][j];
      c[i][j]--;
      for(int k = 0; k < C; k++){
	cost[(i + j + 2) % 3][k] += D[c[i][j]][k];
      }
    }
  }
  int res = MOD;
  for(int i = 0; i < C; i++){
    for(int j = 0; j < C; j++){
      for(int k = 0; k < C; k++){
	if(i == j || i == k || j == k) continue;
	int tmp = cost[0][i] + cost[1][j] + cost[2][k];
	if(tmp < res) res = tmp;
      }
    }
  }
  cout << res << endl;
}
