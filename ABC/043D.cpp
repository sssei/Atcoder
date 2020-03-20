#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  string s;
  cin >> s;
  if(s.size() == 2){
    if(s[0] == s[1]){
      cout << "1 2" << endl;
    }else{
      cout << "-1 -1" << endl;
    }
    return 0;
  }
  for(int i = 2; i < s.size(); i++){
    if(s[i] == s[i-1] || s[i] == s[i-2] || s[i-1] == s[i-2]){
      cout << i-1 << " " << i+1 << endl;
      return 0;
    }
  }
  cout << "-1 -1" << endl;
}
