#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  ll N,M;
  cin >> N >> M;
  if(N > 1&& M > 1){
    cout << (N-2) * (M-2) << endl;
  }else if(N == 1 && M == 1){
    cout << 1 << endl;
  }else{
    cout << max(N,M) - 2 << endl;
  }
}
