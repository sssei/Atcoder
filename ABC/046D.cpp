#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  string s; cin >> s;
  int N = s.size();
  int p = 0;
  for(int i = 0; i < N; i++){
    if(s[i] == 'p') p++;
  }
  int p2 = N / 2;
  cout << p2 - p << endl;
}
