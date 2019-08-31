#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
typedef long long ll;
using namespace std;


int gcd(int a, int b){
  int n1 = a, n2 = b;
  if(n1 < n2) swap(n1, n2);
  int r = n1 % n2;
  while(r){
    n1 = n2;
    n2 = r;
    r = n1 % n2;
  }
  return n2;
}

int main(){
  int N,X;
  cin >> N >> X;
  vector<int> x(N);
  for(int i = 0; i < N; i++){
    cin >> x[i];
    x[i] -= X;
  } 

  int g = abs(x[0]);
  for(int i = 0; i < N; ++i){
    g = gcd(g, abs(x[i]));
  }
  cout << g << endl;
}
