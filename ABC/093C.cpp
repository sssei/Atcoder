#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  vector<int> a(3);
  for(int i = 0; i < 3; ++i){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int gap1 = a[2] - a[1];
  int gap2 = a[2] - a[0];
  if(gap1 % 2 == 0 && gap2 % 2 == 0){
    cout << gap1 /2 + gap2 / 2  << endl;
  }else if(gap1 % 2 == 0 && gap2 % 2 != 0){
    cout << gap1 / 2 + (gap2 + 1) / 2  + 1 << endl;
  }else if(gap1 % 2 != 0 && gap2 % 2 == 0){
    cout << (gap1 + 1) / 2 + gap2 /2 + 1 << endl;
  }else{
    cout << (gap1 - 1)/2 + (gap2 - 1)/2 + 1 << endl;
  }
  
  
}
