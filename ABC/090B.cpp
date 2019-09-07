#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  int cnt = 0;
  for(int i = A; i <= B; ++i){
    if(i%10 == i/10000){
      int tmp1 = i/10;
      int tmp2 = i/1000;
      if(tmp1%10 == tmp2%10) cnt++;
    }
  }
  cout << cnt << endl;
}
