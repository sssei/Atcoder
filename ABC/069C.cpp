#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  int cnt1 = 0, cnt4 = 0, cnt2 = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    if(a[i] % 2 == 1){
      cnt1++;
    }else if(a[i] % 4 == 0){
      cnt4++;
    }else{
      cnt2++;
    }
  }
  if(cnt1 <= cnt4){
    cout << "Yes" << endl;
  }else if(cnt2 == 0 && cnt1 - 1 == cnt4){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
