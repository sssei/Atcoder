#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N;
  cin >> N;
  string N_str = to_string(N);
  int len = N_str.size();
  int n1 = N_str[0] - '0';
  int n2 = N % 10;
  int t = pow(10, len - 1);
  int mid_N = (N % t) / 10;
  if(len == 1){
    cout << N << endl;
  }else if(len == 2){
    ll A = 0;
    ll B = 0;
    ll res = 0;
    for(int x = 1; x < 10; x++){
      for(int y = 1; y < 10; y++){
	A = 0;
	B = 0;
	if(10 * x + y <= N){
	  A++;
	}
	if(10 * y + x <= N){
	  B++;
	}
	if(x == y){
	  A++;
	  B++;
	}
	res += A * B;
      }
    }
    cout << res << endl;
  }else{
    ll A = 0;
    ll B = 0;
    ll tmp  = (pow(10, len - 2) - 1) / 9;
    ll res = 0;
    for(int x = 1; x < 10; x++){
      for(int y = 1; y < 10; y++){
  	A = tmp;
  	B = tmp;
	if(x == y){
	  A++;
	  B++;
	}
  	if(x < n1){
  	  A += pow(10, len - 2);
  	}else if(x == n1){
  	  if(n2 >= y){
	    A += mid_N + 1;
	  }else{
	    A += mid_N;
	  }
  	}
  	if(y < n1){
  	  B += pow(10, len - 2);
  	}else if(y == n1){
  	  if(n2 >= x){
	    B += mid_N + 1;
	  }else{
	    B += mid_N;
	  }
  	}
	res += A * B;
      }
    }
    cout << res << endl;
  }
}
