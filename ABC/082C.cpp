#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  map<int,int> m;
  for(int i = 0; i < N; ++i){
    cin >> a[i];
    m[a[i]]++;
  }
  int cnt = 0;
  for(auto itr = m.begin(); itr != m.end(); itr++){
    if(itr->second > itr->first) cnt += itr->second - itr->first;
    if(itr->second < itr->first) cnt += itr->second;
  }
  cout << cnt << endl;

}
