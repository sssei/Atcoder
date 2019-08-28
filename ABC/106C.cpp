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
  ll K;
  cin >> S >> K;
  char tmp = '1';
  int flag = 0;
  for(string::iterator ptr = S.begin(); ptr != S.end(); ptr++){
    if(*ptr != '1'){
      tmp = *ptr;
      break;
    }
    flag++;
  }
  
  if(K < flag + 1) cout << '1' << endl;
  else cout << tmp << endl;
}
