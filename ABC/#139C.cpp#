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
  vector<int> H(N);
  for(int i = 0; i < N; ++i){
    cin >> H[i];
  }
  int maxL = 0;
  int tmpL = 0;
  for(int i = 0; i < N-1; ++i){
    if(H[i] >= H[i+1]){
      tmpL++;
    }else{
      tmpL = 0;
    }
    maxL = max(maxL, tmpL);
  }
  cout << maxL << endl;
}
