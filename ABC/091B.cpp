#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>
typedef long long ll;
using namespace std;

int main(){
  int n; cin >> n;
  vector<string> s(n);
  map<string, int> r;
  for(int i = 0; i < n; ++i){
    cin >> s[i];
    r[s[i]]++;
  } 
  int m; cin >> m;
  vector<string> t(m);
  for(int i = 0; i < m; ++i){
    cin >> t[i];
    r[t[i]]--;
  }
  int max = 0;
  for(auto itr = r.begin(); itr != r.end(); itr++){
    if(max < itr->second){
      max = itr->second;
    }
  }
  cout << max << endl;
  
  
}
