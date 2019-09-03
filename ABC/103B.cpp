#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;
  int len = S.size();
  bool flag = false;
  for(int i = 0; i < len; ++i){
    string tmp = S.substr(i, len-i) + S.substr(0, i);
    if(tmp == T) flag = true;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
