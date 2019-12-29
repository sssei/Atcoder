#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  int s = a1 + a2 + a3;
  if(s >= 22){
    cout << "bust" << endl;
  }else{
    cout << "win" << endl;
  }
}
