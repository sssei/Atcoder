#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  string S;
  cin >> S;
  if(S[0] != S[1] && S[0] != S[2] && S[1] != S[2]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
