#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

bool judge(int k, int n, int s){
  if(k % 2){
    int l = s, r = s;
    for(int i = 0; i < k/2; i++){
      l -= 2 * pow(4, i);
      r += pow(4, i);
    }
    l -= 2 * pow(4, k/2);
    r -= pow(4, k/2);
    if(l <= n && n <= r){
      return true;
    }else{
      return false;
    }
  }else{
    int l = s, r = s;
    for(int i = 0; i < k/2; i++){
      l += pow(4, i);
      r += pow(4, i);
    }
    l += 1;
    r += pow(4, k/2);
    if(l <= n && n <= r){
      return true;
    }else{
      return false;
    }
  }
}

int main(){
  int N;
  cin >> N;
  if(N == 0){
    cout << 0 << endl;
    return 0;
  }
  int k = 0;
  while(!judge(k, N, 0)){
    k++;
  }
  int ans[k+1];
  if(N) ans[k] = 1;
  else ans[k] = 0;
  int s = pow(-2, k);
  for(int i = k-1; i >= 0; i--){
    if(judge(i, N, s)){
      ans[i] = 1;
      s += pow(-2, i);
    }else{
      ans[i] = 0;
    }
  }
  for(int i = k; i >= 0; i--){
    cout << ans[i];
  }
  cout << endl;
}
