#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N,M; cin >> N >> M;
  int max_L = 0;
  int min_R = N;
  for(int i = 0; i < M; i++){
    int L,R;
    cin >> L >> R;
    if(L > max_L) max_L = L;
    if(R < min_R) min_R = R;
  }
  if(min_R >= max_L)
    cout << min_R - max_L + 1 << endl;
  else
    cout << 0 << endl;
}
