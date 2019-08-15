#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>

using namespace std;

int main(){
  string S; cin >> S;
  sort(S.begin(), S.end());
  if(S[0] == S[1] && S[2] == S[3] && S[1] != S[2]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
