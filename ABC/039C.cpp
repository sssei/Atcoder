#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

int main(){
  string s = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
  string S;
  cin >> S;
  if(S.substr(0, 12) == s.substr(0, 12)){
    cout << "Do" << endl;
  }else if(S.substr(0, 12) == s.substr(2, 12)){
    cout << "Re" << endl;
  }else if(S.substr(0, 12) == s.substr(4, 12)){
    cout << "Mi" << endl;
  }else if(S.substr(0, 12) == s.substr(5, 12)){
    cout << "Fa" << endl;
  }else if(S.substr(0, 12) == s.substr(7, 12)){
    cout << "So" << endl;
  }else if(S.substr(0, 12) == s.substr(9, 12)){
    cout << "La" << endl;
  }else if(S.substr(0, 12) == s.substr(11, 12)){
    cout << "Si" << endl;
  }    
}
