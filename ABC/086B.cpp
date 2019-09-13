#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int res;
  if(b == 100){
    res = a * 1000 + 100;
  }else if(b >= 10){
    res = a * 100 + b;
  }else{
    res = a * 10 + b;
  }
  bool flag = false;
  int i = 1;
  while(i * i <= res){
    if(i * i == res) flag = true;
    i++;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
