#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
  int t = 100000000;
  ll tmp = 0;
  int tm = 0;
  for(int i = 0; i < 100; ++i){
    tmp += t;
    tm += t;
  }
  cout << tm << endl;
  cout << tmp << endl;
}
