#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  if(N%10 != 9 && N/10 != 9){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
