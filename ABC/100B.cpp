#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int D,N;
  cin >> D >> N;
  int ans = 1;
  for(int i = 0; i < D; i++){
    ans *= 100;
  }
  if(N != 100) cout << ans * N << endl;
  else cout << ans * 101 << endl;
}
