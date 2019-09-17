#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> a(N);
  map<int,int> m;
  for(int i = 0; i < N; ++i){
    cin >> a[i];
    m[a[i]]++;
  }
  vector<pair<int,int> > p(M);
  for(int i = 0; i < M; ++i){
    cin >> p[i].second >> p[i].first;
    m[p[i].first] += p[i].second;
  }
  ll sum = 0;
  int cnt = 0;
  for(auto itr = m.rbegin(); itr != m.rend(); ++itr){
    int c = itr->second;
    while(cnt < N && c > 0){
      sum += itr->first;
      c--;
      cnt++;
    }
    if(cnt == N) break;
  }
  
  cout << sum << endl;
  
}
