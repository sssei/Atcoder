#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
  int n; cin >> n;
  vector<int> p(n);
  for(int i = 0; i < n; i++){
    cin >> p[i];
  }
  int cnt = 0;
  for(int i = 0; i < n-2; i++){
    int p1 = p[i];
    int p2 = p[i+1];
    int p3 = p[i+2];
    if((p1 < p2 && p2 < p3) || (p3 < p2 && p2 < p1)) cnt++;
  }
  cout << cnt << endl;
}
