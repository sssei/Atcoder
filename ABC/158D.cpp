#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;


int main(){
  string S;
  cin >> S;
  vector<string> Head, Tail;
  int Q; cin >> Q;
  bool flag = true;
  for(int i = 0; i < Q; i++){
    int T; cin >> T;
    if(T == 1){
      flag = !flag;
    }else{
      int F; cin >> F;
      string  C; cin >> C;
      if((F == 1 && flag) || (F == 2 && flag == false) ){
	Head.push_back(C);
      }else{
	Tail.push_back(C);
      }
    }
  }
  
  if(flag){
    for(int i = Head.size()- 1; i >= 0; i--){
      cout << Head[i];
    }
    cout << S;
    for(int i = 0; i < Tail.size(); i++){
      cout << Tail[i];
    }
    cout << endl;
  }else{
    for(int i = Tail.size()- 1; i >= 0; i--){
      cout << Tail[i];
    }
    for(int i = S.size()- 1; i >= 0; i--){
      cout << S[i];
    }
    for(int i = 0; i < Head.size(); i++){
      cout << Head[i];
    }
    cout << endl;
  }
}
