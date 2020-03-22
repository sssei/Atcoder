#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

bool kaibun(string s){
  bool flag = true;
  int len = s.size();
  for(int i = 0; i < len; i++){
    if(s[i] != s[len-1-i]){
      flag = false;
    }
  }
  return flag;
}

int main(){
  string S; cin >> S;
  bool flag = true;
  flag = kaibun(S);
  int len = S.size();
  string s1 = S.substr(0, len/2);
  string s2 = S.substr(len/2 + 1, len/2);
  flag = flag & kaibun(s1);
  flag = flag & kaibun(s2);
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
