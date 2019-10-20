#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  if(A < 2*B){
    cout << 0 << endl;
  }else{
    cout << A - 2 * B << endl;
  }
}
