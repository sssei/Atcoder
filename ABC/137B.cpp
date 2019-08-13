#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int K, X;
  cin >> K >> X;
  int left, right;
  left = max(X-K+1, -1000000);
  right = min(X+K-1, 1000000);
  for(int i = left; i < right; i++){
    cout << i << " ";
  }
  cout << right << endl;
}
