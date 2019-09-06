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
  int cnt = 0;
  for(int i = 0; i < 3; ++i){
    if(S[i] == 'o') cnt++;
  }
  cout << 700 + cnt * 100 << endl;
}
