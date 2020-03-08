#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll N, A, B;
  cin >> N >> A >> B;
  ll tmp = A + B;
  ll res = 0;
  ll cnt = N / tmp;
  res += A * cnt;
  ll amari = N % tmp;
  if(amari >= A){
    res += A;
  }else{
    res += amari;
  }
  cout << res << endl;
}
