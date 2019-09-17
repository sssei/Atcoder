#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string N;
  cin >> N;
  bool flag = false;
  if(N[0] == N[1] && N[1] == N[2]) flag = true;
  if(N[1] == N[2] && N[2] == N[3]) flag = true;
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
