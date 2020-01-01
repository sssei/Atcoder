#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N;
  cin >> N;
  vector<ll> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  
  sort(A.begin(), A.end());

  ll res1, res2;
  res2 = -1;
  bool flag = false;
  for(int i = N-1; i >= 0; i--){
    if(A[i] == A[i-1]){
      if(!flag){
	res1 = A[i];
      }else{
	res2 = A[i];
	break;
      }
      i--;
      flag = true;
    }
  }

  if(res2 == -1){
    cout << 0 << endl;
  }else{
    cout << res1 * res2 << endl;
  }
}
