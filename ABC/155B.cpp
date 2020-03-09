#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  bool flag = true;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(A[i] % 2 == 0 && A[i] % 3 != 0 && A[i] % 5 != 0){
      flag = false;
      break;
    }
  }
  if(flag){
    cout << "APPROVED" << endl;
  }else{
    cout << "DENIED" << endl;
  }
  
}
