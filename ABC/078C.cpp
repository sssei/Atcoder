#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  cout << (int)pow(2,M) * (1900 * M + (N-M) * 100) << endl;
}
