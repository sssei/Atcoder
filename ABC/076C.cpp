#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  string s;
  string T;
  cin >> s >> T;
  int lenS = s.size(),lenT = T.size();
  bool flag = false;
  int ans;
  for(int i = lenS - lenT; i >= 0; --i){
    bool ok = true;
    for(int j = 0; j < lenT; ++j){
      int ptr = i + j;
      if(s[ptr] == '?') continue;
      if(s[ptr] != T[j]){
	ok = false;
	break;
      } 
    }
    if(ok){
      flag = true;
      ans = i;
      break;
    }
  }
  if(!flag){
    cout << "UNRESTORABLE" << endl;
  }else{
    for(int i = 0; i < lenS; ++i){
      if(i >= ans && i < ans + lenT){
	cout << T[i-ans];
      }else{
	if(s[i] == '?') cout << 'a';
	else cout << s[i];
      }
    }
    cout << endl;
  }
  
}
