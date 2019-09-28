#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector< pair<int, int > > p(N);
  for(int i = 0; i < N; ++i){
    cin >> p[i].first;
    p[i].second = i + 1;
  }
  sort(p.begin(), p.end());
  for(int i = 0; i < N; ++i){
    if(i) cout << " ";
    cout << p[i].second;
  }
  cout << endl;
}
