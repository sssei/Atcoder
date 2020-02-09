#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  string S,T;
  cin >> S >> T;
  int A,B;
  cin >> A >> B;
  string U;
  cin >> U;
  if(U == S){
    cout << A-1 << " " << B << endl;
  }else{
    cout << A << " " << B - 1 << endl;
  }
	      
}
