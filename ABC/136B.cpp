#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool digit(int n){
  bool res = false;
  while(n > 0){
    res = !res;
    n /= 10;
  }
  return res;
}

int main(){
  int N;
  cin >> N;
  int cnt = 0;
  for(int i = 1; i <= N; i++){
    if(digit(i)) cnt++; 
  }
  cout << cnt << endl;
}
