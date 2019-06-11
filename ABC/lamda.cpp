#include <iostream>

using namespace std;

int main(){
  int x = 3;
  auto f = [x](int i)->int{ return i; };
  f();
}
