#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;
#define INF 100000

int main(){
  int N,X;
  cin >> N >> X;
  vector<int> m(N);
  int minM = INF;
  for(int i = 0; i < N; ++i){
    cin >> m[i];
    X -= m[i];
    minM = min(minM, m[i]);
  }

  cout << N + X/minM << endl;

  
}
