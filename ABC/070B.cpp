#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  int l = max(A,C);
  int r = min(B,D);
  if(l <= r){
    cout << r - l << endl;
  }else{
    cout << 0 << endl;
  }
}
