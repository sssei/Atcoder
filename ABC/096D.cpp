#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

vector<bool> prime_sieve; //素数かどうか
vector<ll> prime_numbers; //素数のリスト
void init_prime(ll n){
  prime_sieve.resize(n+1, true);
  prime_sieve[0] = prime_sieve[1] = false;
  for(ll i = 2; i <= n; i++){
    if(prime_sieve[i] == true){
      if(i % 5 == 1) prime_numbers.push_back(i);
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

int main(){
  init_prime(55555);
  int N; cin >> N;
  int res = 0;
  for(int i = 0; i < N; i++){
    if(i) cout << " ";
    cout << prime_numbers[i];
  }
  cout << endl;
}
