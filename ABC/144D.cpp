#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

static const long double pi = 3.141592653589793;

int main(){
  int a,b,x;
  cin >> a >> b >> x;
  long double len = x / (long double) (a * a);
  if(2 * x > a * a * b){
    long double ans = 180/pi * atan(2 * (a * a * b - x) / (long double) (a * a * a));
    cout << ans << endl;
  }else{
    long double ans = 180/pi * atan(a * b * b / (long double)(2 * x));
    cout << ans << endl;
  }
}
