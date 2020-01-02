#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string S;
  cin >> S;
  for(char a = 'a'; a <= 'z'; a++){
    bool flag = true;
    for(int i = 0; i < S.size(); i++){
      if(S[i] == a){
	flag = false;
	break;
      }
    }
    if(flag){
      cout << a << endl;
      break;
    }
    if(a == 'z'){
      cout << "None" << endl;
    }
  }
}
