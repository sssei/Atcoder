#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N,D;
  cin >> N >> D;
  int ans;
  ans = (N - 1) / (2 * D + 1) + 1;
  cout << ans << endl;
}
