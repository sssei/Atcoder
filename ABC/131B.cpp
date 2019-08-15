#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
  int N,L;
  cin >> N >> L;
  
  int minApple = 0;
  for(int i = 0; i < N; i++){
    if(abs(L+minApple) > abs(L+i)) minApple = i;
  }

  int ans = 0;
  for(int i = 0; i < N; i++){
    if(i != minApple) ans += L + i;
  }
  cout << ans << endl;
  
}
