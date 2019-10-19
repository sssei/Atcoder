#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N,K;
  cin >> N >> K;
  string S;
  cin >> S;
  int first = S[0] - '0';
  vector<ll> v;
  ll cnt = 1;
  if(first == 0) v.push_back(0);
  for(int i = 1; i < S.size(); ++i){
    if(S[i] == S[i-1]){
      cnt++;
    }else{
      v.push_back(cnt);
      cnt = 1;
    }
  }
  v.push_back(cnt);
  if(S.back() == '0') v.push_back(0);

  vector<ll> sums(v.size()+1, 0);
  for(int i = 0; i < v.size(); ++i){
    sums[i+1] = sums[i] + v[i];
  }

  ll res = 0;
  for(int left = 0; left < v.size(); left += 2){
    int right = left + 2 * K + 1;
    if(right > v.size()) right = v.size();
    res = max(res, sums[right] - sums[left]);
  }
  cout << res << endl;
  
}
