#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  ll X, A, B;
  cin >> X >> A >> B;
  if(A >= B){
    cout << "delicious" << endl;
  }else if(B - A <= X){
    cout << "safe" << endl;
  }else{
    cout << "dangerous" << endl;
  }
}
