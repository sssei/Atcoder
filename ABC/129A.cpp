#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int P,Q,R;
  cin >> P >> Q >> R;
  int tmp = max({P,Q,R});
  cout << P + Q + R - tmp << endl;
}
