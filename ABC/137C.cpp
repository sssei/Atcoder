#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> str(N);
  map<string, long long > m;
  for(int i = 0; i < N; i++){
    cin >> str.at(i);
    sort(str[i].begin(), str[i].end());
    m[str[i]]++;
  }
  long long  ans = 0;
  for(auto itr = m.begin(); itr != m.end(); itr++){
    long long  t = itr->second;
    ans += t * (t-1) / 2;
  }

  cout << ans << endl;
  
}
