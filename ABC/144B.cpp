#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  bool flag = false;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      if(i * j == N){
	flag = true;
      }
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
