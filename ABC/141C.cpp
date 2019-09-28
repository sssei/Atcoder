#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;

int main(){
  int N,K,Q;
  cin >> N >> K >> Q;
  vector<int> A(Q);
  vector<int> W(N);
  for(int i = 0; i < Q; ++i){
    cin >> A[i];
    W[A[i]-1]++;
  }
  for(int i = 0; i < N; ++i){
    if(W[i] > Q - K) cout << "Yes" << endl;
    else cout << "No" << endl;
  }


  
}
