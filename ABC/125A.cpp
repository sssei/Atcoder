#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int A,B,T;
  cin >> A >> B >> T;
  cout << ((int)((T + 0.5) / A))*B << endl;
}
