#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  if(N % 2 == 0){
    cout << N / 2 - 1 << endl;
  }else{
    cout << N / 2 << endl;
  }
}
