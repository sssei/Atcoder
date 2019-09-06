#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <numeric>
typedef long long ll;
using namespace std;

int main(){
  vector<int> a(3);
  int K;
  cin >> a[0] >> a[1] >> a[2] >> K;
  sort(a.begin(), a.end());
  while(K > 0){
    a[2] *= 2;
    K--;
  }

  cout << accumulate(a.begin(), a.end(), 0) << endl;

}
