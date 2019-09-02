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
  int ans = 0;
  int cnt = 1;
  while(cnt < B){
    cnt += A - 1;
    ans++;
  }
  cout << ans << endl;
}
