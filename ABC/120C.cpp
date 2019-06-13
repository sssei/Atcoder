#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  string S;
  cin >> S;
  int one = 0;
  int zero = 0;
  for(auto i = 0; i < S.length(); i++){
    if(S.at(i) == '0') zero++;
    else one++;
  }
  int a = min(one, zero);
  cout << 2*a << endl;
}
