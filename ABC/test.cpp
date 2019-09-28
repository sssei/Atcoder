#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
  int t = 1;
  for(int i = 0; i < 10; ++i){
    t *= 10;
  }
  cout << t << endl;
}
