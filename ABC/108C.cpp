#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  ll N,K;
  cin >> N >> K;
  ll c1 = N/K;
  ll c2;
  if(K % 2 == 0){
    if(N % K >= K/2) c2 = N/K + 1;
    else c2 = N/K;
    cout << pow(c1, 3) + pow(c2, 3) << endl;
  }else{
    cout << pow(c1, 3)<< endl;
  }
}
