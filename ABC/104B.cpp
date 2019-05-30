#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  string S; cin >> S;
  int length = (int)S.length();
  
  if(S.at(0) != 'A'){
    cout << "WA" << endl;
  }else{
    int cnt = 0;
    int idx; 
    for (int i = 2; i < length - 1; ++i){
      if(S.at(i) == 'C'){
        cnt++;
        idx = i;
      }
    }
    if(cnt != 1){
      cout << "WA" << endl;
    }else{
      S.erase(S.begin());
      S.erase(S.end() - 2);
      string S2;
      transform(S.begin(),S.end(),S2.begin(),::tolower);
      if(S != S2) cout << "WA" << endl;
      else cout << "AC" << endl;
    }
  }
}
