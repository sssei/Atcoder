#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> prime_sieve;
vector<ll> prime_numbers;
void init_prime(ll n){
  prime_sieve.resize(n+1, true);
  prime_sieve[0] = prime_sieve[1] = false;
  for(ll i = 2; i <= n; i++){
    if(prime_sieve[i] == true){
      prime_numbers.push_back(i);
      for(ll j = 2; i * j <= n; j++){
	prime_sieve[i * j] = false;
      }
    }
  }
}

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
  init_prime(10000);
  for(auto x: prime_numbers){
    cout << x << endl;
  }
}
