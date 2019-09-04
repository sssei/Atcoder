#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  int tmp = N;
  int S = 0;
  while(N){
    S += N % 10;
    N /= 10;
  }
  if(tmp % S == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
    
}
