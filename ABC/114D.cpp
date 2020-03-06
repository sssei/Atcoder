#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
typedef long long ll;
const int MOD = 1000000007;

vector<bool> prime_sieve; //素数かどうか
vector<ll> prime_numbers; //素数のリスト
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

//N!に何個素数pが存在するか
int count_prime(int N, int p){ 
  int res = 0;
  int tmp = p;
  while(N >= tmp){
     res += N/tmp;
    tmp *= p;
  }
  return res;
}

int main(){
  int N;
  cin >> N;
  init_prime(N);
  int cnt75 = 0;
  int cnt24 = 0;
  int cnt14 = 0;
  int cnt4 = 0;
  int cnt2 = 0;
  int cnt5 = 0;
  for(auto x: prime_numbers){
    int tmp = count_prime(N,x);
    if(tmp >= 74){
      cnt75++; cnt24++; cnt14++; cnt4++; cnt2++; cnt5++;
    }else if(tmp >= 24){
      cnt24++; cnt14++; cnt4++; cnt2++; cnt5++;
    }else if(tmp >= 14){
      cnt14++; cnt4++; cnt2++; cnt5++;
    }else if(tmp >= 5){
      cnt4++; cnt2++; cnt5++;
    }else if(tmp >= 4){
      cnt4++; cnt2++;
    }else if(tmp >= 2){
      cnt2++;
    }
  }
   int res = 0;
  res += cnt75;
  res = res +  cnt24 * (cnt2 - 1);
  res = res + cnt14 * (cnt4 - 1);
  res += (cnt4 * (cnt4-1)) / 2  * (cnt2-2);
  cout << res << endl;
}
