#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  string S;
  cin >> S;
  transform(S.begin() + K - 1, S.begin() + K, S.begin() + K - 1, ::tolower);
  cout << S << "\n";
}
