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
  if(K % 2 == 0){
    ll c2 = (N + (K/2)) / K;
    cout << c1 * c1 * c1 + c2 * c2 * c2 << endl;
  }else{
    cout << c1 * c1 * c1 << endl;
  }
}
