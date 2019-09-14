#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  string S;
  cin >> S;
  bool flag = true;
  for(int i = 0; i < A; ++i){
    if(S[i] > '9' || S[i] < '0'){
      flag = false;
       } 
  }
  if(S[A] != '-'){
    flag = false;
  } 
  for(int i = A+1; i < A+B+1; ++i){
    if(S[i] > '9' || S[i] < '0'){
      flag = false;
    } 
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
