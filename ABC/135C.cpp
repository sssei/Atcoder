#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<ll> A(N+1);
  vector<ll> B(N+1);
  for(int i = 0; i < N + 1; i++){
    cin >> A.at(i);
  }
  for(int i = 0; i < N; i++){
    cin >> B.at(i);
  }

  ll ans = 0;
  ll tmp = min(A.at(0), B.at(0));
  A.at(0) -= tmp;
  B.at(0) -= tmp;
  ans += tmp;
  for(int i = 1; i < N+1; i++){
    tmp = min(A.at(i), B.at(i-1));
    A.at(i) -= tmp;
    B.at(i-1) -= tmp;
    ans += tmp;
    tmp = min(A.at(i), B.at(i));
    A.at(i) -= tmp;
    B.at(i) -= tmp;
    ans += tmp;
  }
  cout << ans << endl;
}
