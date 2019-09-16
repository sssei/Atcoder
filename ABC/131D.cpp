#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<ll,ll> > p(N);
  for(int i = 0; i < N; ++i){
    cin >> p[i].second >> p[i].first;
  }
  sort(p.begin(), p.end());
  int t = 0;
  bool flag = true;
  for(int i = 0; i < N; ++i){
    t += p[i].second;
    if(t > p[i].first){
      flag = false;
      break;
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}
