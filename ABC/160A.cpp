#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  string S;
  cin >> S;
  if(S[2] == S[3] && S[4] == S[5]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
