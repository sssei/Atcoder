#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  ll N,C; cin >> N >> C;
  vector<vector<int>> vec(30, vector<int>(100010, 0));
  for(int i = 0; i < N; i++){
    int s,t,c;
    cin >> s >> t >> c;
    c--;
    vec[c][s]++;
    vec[c][t+1]--;
  }
  for(int i = 0; i < C; i++){
    for(int j = 1; j < 100010; j++){
      vec[i][j] += vec[i][j-1];
    }
  }

  int res = 0;
  for(int i = 0; i < 100010; i++){
    int tmp = 0;
    for(int j = 0; j < C; j++){
      if(vec[j][i] > 0){
	tmp++;
      }
    }
    if(tmp > res) res = tmp;
  }
  cout << res << endl;
}
