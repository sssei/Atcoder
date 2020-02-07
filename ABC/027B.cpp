#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  int res = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    res += a[i];
  }
  if(res % N != 0){
    cout << -1 << endl;
    return 0;
  }
  res = res / N;
  int tmp = 0;
  int tmpCnt = 0;
  int cnt = 0;
  for(int i = 0; i < N; i++){
    tmp += a[i];
    tmpCnt++;
    if(res * tmpCnt == tmp){
      tmp = 0;
      tmpCnt = 0;
      continue;
    }else{
      cnt++;
    }
  }
  cout << cnt << endl;
}
