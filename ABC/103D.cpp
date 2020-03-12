#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;


bool compare_by_b(pair<int,int> a, pair<int, int> b){
  if(a.second != b.second){
    return a.second < b.second;
  }else{
    return a.first < b.first;
  }
}

int main(){
  int N,M;
  cin >> N >> M;
  vector<pair<int,int>> a(M);
  for(int i = 0; i < M; i++){
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end(), compare_by_b);
  int res = 0;
  int right = -1;
  for(int i = 0; i < M; i++){
    int tmp = a[i].first;
    if(tmp > right){
      res++;
      right = a[i].second - 1;
    }
  }
  cout << res << endl;
}
