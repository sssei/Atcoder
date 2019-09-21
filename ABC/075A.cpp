#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a != b && a == c) cout << b << endl;
  else if(a == b && a != c) cout << c << endl;
  else cout << a << endl;
}
