#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      sum += i * j;
    }
  }
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      if(N + i * j == sum){
	cout << i << " x " << j << endl;
      }
    }
  }
}
