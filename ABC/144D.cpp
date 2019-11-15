#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

static const long double pi = 3.141592653589793;

int main(){
  double a,b,x;
  cin >> a >> b >> x;
  double len = x / a * a;
  if(2 * x > a * a * b){
    double ans = 180/pi * atan(2 * (a * a * b - x) / (a * a * a));
    cout << setprecision(12) <<  ans << endl;
  }else{
    double ans = 180/pi * atan(a * b * b / (2 * x));
    cout << setprecision(12) << ans << endl;
  }
}
