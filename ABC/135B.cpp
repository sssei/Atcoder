#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;
  int P[N];
  for(int i = 0; i < N; i++){
    cin >> P[i];
  }
  int cnt = 0;
  for(int i = 0; i < N; i++){
    if(P[i] != i + 1) cnt++;
  }
  if(cnt <= 2) cout << "YES" << endl;
  else cout << "NO" << endl;
}
