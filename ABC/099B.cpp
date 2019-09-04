#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int gap = b - a;
  int ans = 0.5 * gap * (gap + 1) - b;
  cout << ans << endl;
}
