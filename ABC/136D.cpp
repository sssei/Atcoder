#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string S;
  cin >> S;
  int N = S.size();
  int r = 0;
  int l, rN, lN;
  bool flag = true;
  vector<int> rec(N);
  for(int i = 0; i < N; ++i){
    if(!flag && S[i] == 'R'){
      flag = true;
      rN = l - r;
      lN = i - l;
      r = i;
      rec[l-1] = (rN+1)/2 + lN/2;
      rec[l] = rN/2 + (lN+1)/2;
    }else if(flag && S[i] == 'L'){
      flag = false;
      l = i;
    }
  }
  rN = l - r;
  lN = N - l;
  rec[l-1] = (rN+1)/2 + lN/2;
  rec[l] = rN/2 + (lN+1)/2;
  for(int i = 0; i < N; ++i){
    if(i) cout << " ";
    cout << rec[i];
  }
  cout << endl;
}
