#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(){
  string S;
  cin >> S;
  int cnt = 0;
  vector <int> len;
  for (auto i = 0; i < S.length(); i++){
    if(S[i] == 'A' || S[i] == 'T' || S[i] == 'C' || S[i] == 'G'){
      cnt++;
      if(i == S.length() - 1) len.push_back(cnt);
    }else{
      len.push_back(cnt);
      cnt = 0;
    }
  }
  cout << *max_element(len.begin(),len.end()) << endl;
}
