#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  priority_queue<ll> A;
  for(int i = 0; i < N; ++i){
    ll tmp;
    cin >> tmp;
    A.push(tmp);
  }
  for(int i = 0; i < M; ++i){
    ll top = A.top();
    A.pop();
    A.push(top/2);
  }
  ll ans = 0;
  while(!A.empty()){
    ans += A.top();
    A.pop();
  }
  cout << ans << endl;

  
}
