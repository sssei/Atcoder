#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int A,B;
  cin >> A >> B;
  if(A * B == 2){
    cout << 3 << endl;
  }else if(A * B == 3){
    cout << 2 << endl;
  }else{
    cout << 1 << endl;
  }
}
