#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> P(N), Q(N);
  for(int i = 0; i < N; i++){
    cin >> P[i];
  }
  for(int i = 0; i < N; i++){
    cin >> Q[i];
  }
  vector<int> v(N);
  for(int i = 0; i < N; i++){
    v[i] = i + 1;
  }
  map<vector<int>, int> ord;
  int iter = 0;
  do{
    ord[v] = iter++;
  }while(next_permutation(v.begin(), v.end()));
  cout << abs(ord[P] - ord[Q]) << endl;
}
