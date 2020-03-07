#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  int A,B;
  cin >> A >> B;
  bool flag = false;
  int res;
  for(int x = 1; x <= 50000; x++){
    if(x * 8 / 100 == A && x * 10 / 100 == B){
      res = x;
      flag = true;
      break;
    }
  }
  if(flag == false){
    cout << -1 << endl;
  }else{
    cout << res << endl;
  }
}
