#include <iostream>
typedef long long ll;
using namespace std;

int N;

void func(ll cur, int use, int &counter){
  if(cur > N) return;
  if(use == 0b111) counter++;
  func(10*cur + 3, use | 0b001, counter);
  func(10*cur + 5, use | 0b010, counter);
  func(10*cur + 7, use | 0b100, counter);
}

int main(){
  cin >> N;
  int res = 0;
  func(0, 0, res);
  cout << res << endl;
}

