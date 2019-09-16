#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  map<int,int> m;
  for(int i = 0; i < N; ++i){
    int t;
    cin >> t;
    m[t]++;
  }
  int s = m.size();
  priority_queue<int, vector<int>, greater<int> > p;
  for(auto x: m){
    p.push(x.second);
  }
  if(s <= K){
    cout << 0 << endl;
  }else{
    int res = 0;
    int t = s - K;
    for(int i = 0; i < t; ++i){
      res += p.top();
      p.pop();
    }
    cout << res << endl;
  }


}
