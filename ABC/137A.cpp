#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int A,B; cin >> A >> B;
  cout << max({A+B, A-B, A*B}) << endl;
}
