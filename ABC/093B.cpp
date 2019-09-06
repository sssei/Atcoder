#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int A,B,K;
  cin >> A >> B >> K;
  int r,l;
  l = A+K-1;
  r = B-K+1;
  if(l < r){
    for(int i = A; i <= l; ++i){
      cout << i << endl;
    }
    for(int i = r; i <= B; ++i){
      cout << i << endl;
    }
  }else{
    for(int i = A; i <= B; ++i){
      cout << i << endl;
    }
  }
  
}
