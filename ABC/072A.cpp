#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll X,t;
  cin >> X >> t;
  if(t >= X){
    cout << 0 << endl;
  }else{
    cout << X - t << endl;
  }
}
