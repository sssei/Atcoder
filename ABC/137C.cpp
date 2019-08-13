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
  map<long long, int> cnt;
  for(int i = 0; i < N; i++){
    cin >> str.at(i);
  }

  for(int i = 0; i < N; i++){
    long long res = 0;
    for(int j = 0; j < 10; j++){
      int digit = str[i][j] - 'a';
      cout << "digit : " << digit << endl;
      res += pow(11, digit);
    }
    cout << "res: " << res << endl;
    cnt[res]++;
  }

  int ans = 0;
  for(auto itr = cnt.begin(); itr != cnt.end(); itr++){
    cout << "map " << itr->first << " " << itr->second << endl;
    ans += itr->second * (itr->second - 1);    
  }

  cout << ans << endl;
}
