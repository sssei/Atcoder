#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  string S;
  cin >> S;
  int cnt = 0;
  bool flag = false;
  for(int i = 0; i < S.size(); i++){
    if(S[i] == '+'){
      if(flag == false){
	cnt++;
      }
      flag = false;
    }else if(S[i] == '0'){
      flag = true;
    }
  }
  if(flag == false){
    cnt++;
  }
  cout << cnt << endl;
}
