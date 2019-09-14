#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  int rec = 1;
  for(int i = 0; i < N; ++i){
    if(rec + K > 2 * rec) rec = 2 * rec;
    else rec += K;
  }
  cout << rec << endl;

}
