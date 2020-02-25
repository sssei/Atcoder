#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  set<int> b;
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    while(a % 2 == 0){
      a = a / 2;
    }
    b.insert(a);
  }
  cout << b.size() << endl;
  
}
