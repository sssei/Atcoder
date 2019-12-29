#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int x,a,b;
  cin >> x >> a >> b;
  int x_a = abs(x - a);
  int x_b = abs(x - b);
  if(x_a > x_b){
    cout << "B" << endl;
  }else{
    cout << "A" << endl;
  }
}
