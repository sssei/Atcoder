#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  string S;
  cin >> S;
  int cnt = 1;
  char flag = 'L';
  bool right = false;
  if(S[0] == 'R'){
    right = true;
    flag = 'R';
  }
  int happy = 0;
  for(int i = 1; i < N; ++i){
    if(S[i] != flag){
      cnt++;
      if(flag == 'L') flag = 'R';
      else flag = 'L';
    }else{
      happy++;
    }
  }

  while(cnt > 1 && K > 0){
    if(cnt >= 3){
      K--;
      happy += 2;
      cnt -= 2;
    }else{
      K--;
      happy++;
      cnt--;
    }
  }

  cout << happy << endl;
}
