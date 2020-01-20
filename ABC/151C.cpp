#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> penalty(N);
  int AC = 0;
  int WA = 0;
  for(int i = 0; i < M; i++){
    int p;
    cin >> p;
    p--;
    string S;
    cin >> S;
    if(S == "WA"){
      if(penalty[p] != -1){
	penalty[p]++;
      }
    }else{
      if(penalty[p] != -1){
	AC++;
	WA += penalty[p];
	penalty[p] = -1;
      }
    }
  }
  cout << AC << " " << WA << endl;
}
