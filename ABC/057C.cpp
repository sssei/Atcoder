#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N;
  cin >> N;
  ll res;
  for(ll i = 1; i * i <= N; i++){
    if(N % i == 0){
      res = N/i;
    }
  }
  int cnt = 0;
  while(res){
    cnt++;
    res /= 10;
  }
  cout << cnt << endl;
}
