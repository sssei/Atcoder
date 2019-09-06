#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int a,b,x;
  cin >> a >> b >> x;
  if(x >= a && x <= b+a) cout << "YES" << endl;
  else cout << "NO" << endl;
}
