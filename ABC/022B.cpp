#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<bool> flag(100001, false);
  int res = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(flag[A[i]]){
      res++;
    }
    flag[A[i]] = true;
  }
  cout << res << endl;
}
