#include <iostream>

using namespace std;

int main(){
  int r,D,x0;
  cin >> r >> D >> x0;
  int x = r*x0 - D;
  for(int i = 0; i < 10; i++){
    cout << x << endl;
    x = r*x - D;
  }
}
