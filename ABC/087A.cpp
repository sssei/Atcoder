#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int x,a,b;
  cin >> x >> a >> b;
  x -= a;
  x = x % b;
  cout << x << endl;
}
