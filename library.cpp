#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//素数か判定 O(sqrt(N))
bool is_prime(ll N){
  if(N <= 1) return false;
  for(ll i = 2; i * i <= N; i++){
    if(N % i == 0){
      return false;
    }
  }
  return true;
}

ll gcd(ll a, ll b){ 
  if(b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b){ 
  return a * b / gcd(a, b);
}


int main(){

}
