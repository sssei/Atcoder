#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> H(N);
  for(int i = 0; i < N; i++){
    cin >> H.at(i);
  }
  bool flag = false;
  bool ans = true;
  for(int i = 1; i < N; i++){
    if(H.at(i)+1 < H.at(i-1)){
      ans = false;
      break;
    }else if(H.at(i) + 1 == H.at(i-1)){
      if(flag){
	ans = false;
	break;
      }else{
	flag = true;
      }
    }else if(H.at(i) > H.at(i-1)){
      flag  = false;
    }
  }
  if(ans){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
