#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){ 
  if(b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b){ 
  return a * b / gcd(a, b);
}

int main(){
  int A,B;
  cin >> A >> B;
  cout << lcm(max(A,B), min(A,B)) << endl;
}
