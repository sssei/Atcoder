#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  ll L[90];
  L[0] = 2;
  L[1] = 1;
  int N;
  cin >> N;
  for(int i = 2; i <= N; ++i){
    L[i] = L[i-1] + L[i-2];
  }
  cout << L[N] << endl;
}
