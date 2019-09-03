#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  if(N%2 == 0){
    cout << N << endl;
  }else{
    cout << N * 2 << endl;
  }
}
