#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i = 0; i < N; i++) cin >> d[i];

  sort(d.begin(), d.end());
  int l = d[N/2-1];
  int r = d[N/2];
  cout << r - l << endl;
}
