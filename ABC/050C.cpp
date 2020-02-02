#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  bool flag = true;
  if(N % 2 == 0){
    for(int i = 0; i < N; i++){
      if(A[i] != ((i/2) * 2 + 1 )){
	flag = false;
      }
    }
  }else{
    for(int i = 0; i < N; i++){
      if(i % 2 == 0){
	if(A[i] != i){
	  flag = false;
	}
      }else{
	if(A[i] != i + 1){
	  flag = false;
	}
      }
    }
  }
  if(flag == false){
    cout << 0 << endl;
  }else{
    int tmp = N / 2;
    int res = 1;
    for(int i = 0; i < tmp; i++){
      res = res * 2 % MOD;
    }
    cout << res << endl;
  }
}
