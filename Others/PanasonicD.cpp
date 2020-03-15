#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int N;
vector<string> vec;

void func(string s, char c){
  if(s.size() == N){
    vec.push_back(s);
    return;
  }else{
    char tmp = c;
    for(char i = 'a'; i <= tmp; i++){
      string res = s;
      res.push_back(i);
      if(i == tmp){
	func(res, tmp + 1);
      }else{
	func(res, tmp);
      }
    }
    return;
  }
}

int main(){
  cin >> N;
  func("", 'a');
  for(auto x: vec){
    cout << x << endl;
  }
}
