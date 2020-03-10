#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  string s1,s2,s3;
  cin >> s1 >> s2 >> s3;
  char t = s1[0];
  t -= 32;
  cout << t;
  char t2 = s2[0];
  t2 -= 32;
  cout << t2;
  char t3 = s3[0];
  t3 -= 32;
  cout << t3;
  cout << endl;
}
