#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <set>
typedef long long ll;
using namespace std;

int main(){
  string s;
  cin >> s;
  int K;
  cin >> K;
  vector<string> x;
  for(int i = 0; i < s.size(); ++i){
    for(int j = 1; j <= K; ++j){
      string tmp = s.substr(i,j);
      x.push_back(tmp);
    }
  }
  sort(x.begin(), x.end());
  x.erase(unique(x.begin(), x.end()), x.end());
  cout << x[K-1] << endl;
}
