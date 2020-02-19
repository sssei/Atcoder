#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  int res = 0;
  bool flag = true;
  vector<int> s(N);
  int tmp = MOD;
  for(int i = 0; i < N; i++){
    cin >> s[i];
    if(s[i] % 10 == 0){
      res += s[i];
      continue;
    }else{
      flag = false;
      res += s[i];
      tmp = min(tmp, s[i]);
    }
  }
  if(flag){
    cout << 0 << endl;
  }else{
    if(res % 10 == 0){
      cout << res - tmp << endl;
    }else{
      cout << res << endl;
    }
  }
}
