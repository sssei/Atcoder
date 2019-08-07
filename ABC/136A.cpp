#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int A,B,C;
  cin >> A >> B >> C;
  int ans = C - A + B;
  if(ans >= 0) cout << ans << endl;
  else cout << 0 << endl;
}
