#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  int cnt = 0;
  for(int i = 0; i < len/2; i++){
    if(S[i] != S[len-1-i]){
      cnt++;
    }
  }
  cout << cnt << endl;
}
