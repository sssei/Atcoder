#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;  

int gcd(int a, int b){
  if(a < b) swap(a,b);
  int r = a % b;
  while(r){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main(){

  int N; cin >> N;
  vector <int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  vector <int> r(N),l(N);
  l.at(0) = A.at(0);
  r.at(N-1) = A.at(N-1);
  for(int i = 1; i < N; i++){
    l.at(i) = gcd(l.at(i-1), A.at(i));
    r.at(N-i-1) = gcd(r.at(N-i), A.at(N-i-1));
  }
  vector <int> g(N);
  g.at(0) = r.at(1);
  g.at(N-1) = l.at(N-2);
  for (int i = 1; i < N-1; i++){
    g.at(i) = gcd(l.at(i-1),r.at(i+1));
  }

  cout <<  *max_element(g.begin(),g.end()) << endl;
}
