#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string S;
  cin >> S;
  ll len = S.size();
  int i = 0;
  bool flag = true;
  while(i < len){
    if(S.substr(i, 5) == "dream"){
      i += 5;
      if(S[i] == 'd' || S[i] == '\0' || S.substr(i, 3) == "era"){
  	continue;
      }else if(S.substr(i, 2) == "er"){
  	if(S[i+2] == 'd' || S[i+2] == 'e' || S[i+2] == '\0'){
  	  i += 2;
  	  continue;
  	}else{
  	  flag = false;
  	  break;
  	}
      }else{
        flag = false;
  	break;
      }
    }else if(S.substr(i, 5) == "erase"){
      i += 5;
      if(S[i] == '\0' || S[i] == 'd' || S[i] == 'e'){
	continue;
      }else if(S[i] == 'r'){
	i++;
	continue;
      }else{
	flag = false;
	break;
      }
    }else{
      flag = false;
      break;
    }
  }
  if(flag){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
