#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  int ans = max(A+B, A-B);
  ans = max(ans, A*B);
  cout << ans << endl;
}
