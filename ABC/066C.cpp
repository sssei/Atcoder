#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  if(n % 2 == 0){
    for(int i = n-1; i >= 0; i = i - 2){
      cout << a[i] << " ";
    }
    for(int i = 0; i < n-1; i = i + 2){
      cout << a[i] << " ";
    }
  }else{
    for(int i = n-1; i >=0; i = i - 2){
      cout << a[i] << " ";
    }
    for(int i = 1; i < n-1; i = i + 2){
      cout << a[i] << " ";
    }
  }
  cout << endl;
}
