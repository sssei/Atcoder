#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int xa,ya,xb,yb,xc,yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  int a = xb - xa;
  int b = yb - ya;
  int c = xc - xa;
  int d = yc - ya;
  double sum = (double)abs(a * d - b * c) / 2;
  cout << fixed << setprecision(3) << sum << endl;
}
