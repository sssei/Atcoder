#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll H,N;
  cin >> H >> N;
  vector<ll> A(N);
  ll res = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    res += A[i];
  }
  if(res >= H){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
}
