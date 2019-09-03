#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;
#define INF 1<<30

int N,A,B,C;
vector<int> L;

int rec(int i, int a, int b, int c){
  if(i == N){
    if(!a || !b || !c) return INF;
    return abs(a-A) + abs(b-B) + abs(c-C) - 30;
  }

  int res = rec(i+1, a, b, c);
  res = min(res, rec(i+1, a+L[i], b, c)+10);
  res = min(res, rec(i+1, a, b+L[i], c)+10);
  res = min(res, rec(i+1, a, b, c+L[i])+10);

  return res;
  
}

int main(){
  cin >> N >> A >> B >> C;
  L.resize(N);
  for(int i = 0; i < N; ++i){
    cin >> L[i];
  }

  cout << rec(0, 0, 0, 0) << endl;
}
