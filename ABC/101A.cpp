#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string S;
  cin >> S;
  int ans = 0;
  for(int i = 0; i < 4; ++i){
    if(S[i] == '+'){
      ans++;
    }else{
      ans--;
    }
  }
  cout << ans << endl;
}
