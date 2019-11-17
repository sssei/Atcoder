#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const long long MOD = 1000000007;
const int MAX_C = 10000000;
long long Com[MAX_C][MAX_C];

void calc_com() {
    memset(Com, 0, sizeof(Com));
    Com[0][0] = 1;
    for (int i = 1; i < MAX_C; ++i) {
        Com[i][0] = 1;
        for (int j = 1; j < MAX_C; ++j) {
            Com[i][j] = (Com[i-1][j-1] + Com[i-1][j]) % MOD;
        }
    }
}

int main(){
  calc_com();
  int X,Y;
  cin >> X >> Y;
  int tmp = X + Y;
  if(tmp % 6 != 0){
    cout << 0 << endl;
  }else{
    int n = tmp / 3;
    int r = X - n;
    cout << Com[n][r] << endl;
  }

}
