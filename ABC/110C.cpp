#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;
  vector<int> s(26,0),t(26,0);
  for(int i = 0; i < S.length(); ++i){
    s[S[i]-'a']++;
    t[T[i]-'a']++;
  }
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  for(int i = 0; i < 26; ++i){
    if(s[i] != t[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
