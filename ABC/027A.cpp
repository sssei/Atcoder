#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int l1,l2,l3;
  cin >> l1 >> l2 >> l3;
  if(l1 == l2){
    cout << l3 << endl;
  }else if(l1 == l3){
    cout << l2 << endl;
  }else if(l2 == l3){
    cout << l1 << endl;
  }
}
