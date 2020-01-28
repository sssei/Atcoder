#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,K,M;
  cin >> N >> K >> M;
  vector<int> A(N-1);
  int res = 0;
  for(int i = 0; i < N-1; i++){
    cin >> A[i];
    res += A[i];
  }
  int tmp = N * M - res;
  if(tmp <= 0){
    cout << 0 << endl;
  }else if(tmp <= K){
    cout << tmp << endl;
  }else{
    cout << -1 << endl;
  }
}
