#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll N){ //Nが素数かどうか判定 O(sqrt(N))
  if(N <= 1) return false;
  for(ll i = 2; i * i <= N; i++){
    if(N % i == 0){
      return false;
    }
  }
  return true;
}

int main(){

}
