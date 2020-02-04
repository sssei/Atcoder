#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  int l = 0;
  int r = 0;
  ll res = 0;
  while(l < N){
    while(r < N-1 && a[r] < a[r+1]){
      r++;
    }
    res += r - l + 1;
    l++;
    if(l > r){
      r = l;
    }
  }
  cout << res << endl;
  // int tmp = 1;
  // ll res = 0;
  // for(int i = 1; i < N; i++){
  //   if(a[i] > a[i-1]){
  //     tmp++;
  //   }else{
  //     res += ((tmp+1) * tmp) / 2;
  //     tmp = 1;
  //   }
  // }
  // res += ((tmp + 1) * tmp) / 2;
  // cout << res << endl;
}
