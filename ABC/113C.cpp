#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> P(M), Y(M);
  for(int i = 0; i < M; ++i){
    cin >> P[i] >> Y[i];
    P[i]--;
  } 
  vector< vector<int> > Pre(N);
  for(int i = 0; i < M; ++i){
    Pre[P[i]].push_back(Y[i]);
  }
  for(int i = 0; i < N; ++i){
    sort(Pre[i].begin(), Pre[i].end());
  }
  for(int i = 0; i < M; ++i){
    printf("%012lld\n", (ll)1000000 *( P[i]+1) + lower_bound(Pre[P[i]].begin(), Pre[P[i]].end(), Y[i]) - Pre[P[i]].begin() + 1LL);
  }
}
