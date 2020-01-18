#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  string A,B,C;
  cin >> A >> B >> C;
  if(A.back() == B[0] && B.back() == C[0]){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
