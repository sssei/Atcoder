#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>
typedef long long ll;
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;
  map<char,char> m1, m2;
  bool flag = true;
  for(int i = 0; i < S.size(); ++i){
    char s = S[i], t = T[i];
    if(m1.count(s)) if(m1[s] != t) flag = false;
    if(m2.count(t)) if(m2[t] != s) flag = false;
    m1[s] = t;
    m2[t] = s;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  
}
