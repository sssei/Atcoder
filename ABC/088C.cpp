#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int c[3][3];
  for(int i = 0; i < 3; ++i){
    cin >> c[i][0] >> c[i][1] >> c[i][2];
  }
  bool flag = true;
  int gap1 = c[0][0] - c[1][0];
  int gap2 = c[1][0] - c[2][0];
  for(int i = 1; i <= 2; ++i){
    if(gap1 != c[0][i] - c[1][i]) flag = false;
    if(gap2 != c[1][i] - c[2][i]) flag = false;
  }
  int gap3 = c[0][1] - c[0][0];
  int gap4 = c[0][2] - c[0][1];
  for(int i = 1; i <= 2; ++i){
    if(gap3 != c[i][1] - c[i][0]) flag = false;
    if(gap4 != c[i][2] - c[i][1]) flag = false;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
