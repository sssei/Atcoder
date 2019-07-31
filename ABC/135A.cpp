#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int c = a + b;
  if(c % 2 == 0){
    cout << c/2 << endl;
  }else{
    cout << "IMPOSSIBLE" << endl;
  }
}
