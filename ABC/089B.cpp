#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  char S[N];
  bool flag = false;
  for(int i = 0; i < N; ++i){
    cin >> S[i];
    if(S[i] == 'Y') flag = true;
  }
  if(flag) cout << "Four" << endl;
  else cout << "Three" << endl;
}
