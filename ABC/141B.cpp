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
  bool flag = true;
  for(int i = 0; i < S.size(); ++i){
    if(i % 2 == 0){
      if(S[i] == 'L') flag = false;
    }else{
      if(S[i] == 'R') flag = false;
    }
  }
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
