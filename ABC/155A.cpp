#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int A,B,C;
  cin >> A >> B >> C;
  if((A == B && B == C) || (A != B && A != C && B != C)){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
