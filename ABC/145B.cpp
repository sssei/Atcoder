#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  if(N % 2 != 0){
    cout << "No" << endl;
  }else{
    bool flag = true;
    for(int i = 0; i < N/2; i++){
      if(S[i] != S[N/2+i]){
	flag = false;
      }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
  }


}
