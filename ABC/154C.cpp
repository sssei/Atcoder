#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll N;
  cin >> N;
  vector<ll> a(N);
  for(int i = 0 ; i < N; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  bool flag = true;
  for(int i = 1; i < N; i++){
    if(a[i] == a[i-1]){
      flag = false;
      break;
    }
  }
  if(flag){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
    
}
