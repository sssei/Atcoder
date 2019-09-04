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
  int N;
  cin >> N;
  string S;
  cin >> S;
  map<char, int> l,r;
  for(int i = 0; i < N; ++i){
    r[S[i]]++;
  }
  int ans = 0;
  for(int i = 1; i < N; ++i){
    int cnt = 0;
    r[S[i-1]]--;
    l[S[i-1]]++;
    for(auto itr = l.begin(); itr != l.end(); itr++){
      if(r[itr->first] > 0) cnt++;
    }
    ans = max(cnt, ans);
  }
  cout << ans << endl;
}
