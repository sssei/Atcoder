#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int cnt = 0;
  int flag = 0;
  for(int i = 0; i < S.size(); i++){
    if(S[i] == 'A'){
      flag = 1;
    }else if(S[i] == 'B' && flag == 1){
      flag = 2;
    }else if(S[i] == 'C' && flag == 2){
      cnt++;
      flag = 0;
    }else{
      flag = 0;
    }
  }
  cout << cnt << endl;
}
