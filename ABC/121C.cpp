#include <vector>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  long long N,M;
  cin >> N >> M;
  vector < pair<long long, long long> > vec(N);
  for (long i = 0; i < N; i++){
    cin >> vec[i].first >> vec[i].second;
  }
  sort(vec.begin(), vec.end());
  long long res = 0;
  for(long i = 0; i < N && M > 0; i++){
    res += min(M, vec[i].second) * vec[i].first;
    M -= min(M, vec[i].second);
  }
  cout << res << endl;
}


