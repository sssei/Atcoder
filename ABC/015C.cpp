#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,K;
  cin >> N >> K;
  vector<vector<int>> T(N, vector<int>(K));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < K; j++){
      cin >> T[i][j];
    }
  }
  bool flag = false;
  for(int i = 0; i < pow(K, N); i++){
    int tmp;
    int digit = 1;
    int res = 0;
    for(int j = 0; j < N; j++){
      tmp = (i / digit) % K;
      digit *= K;
      res = T[j][tmp] ^ res;
    }
    if(res == 0){
      flag = true;
    }
  }
  if(flag){
    cout << "Found" << endl;
  }else{
    cout << "Nothing" << endl;
  }
}
