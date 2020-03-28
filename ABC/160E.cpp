#include <bits/stdc++.h>
#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
using namespace std;
static const ll MOD = 1000000007;

int main(){
  ll X,Y,A,B,C;
  cin >> X >> Y >> A >> B >> C;
  vector<ll> p(A);
  vector<ll> q(B);
  vector<ll> r(C);
  for(int i = 0; i < A; i++){
    cin >> p[i];
  }
  for(int i = 0; i < B; i++){
    cin >> q[i];
  }
  for(int i = 0; i < C; i++){
    cin >> r[i];
  }
  sort(p.begin(), p.end());
  sort(q.begin(), q.end());
  sort(r.begin(), r.end());
  ll res = 0;
  int idxA = A - X;
  int idxB = B - Y;
  int idxC = C - 1;
  bool flagA = true;
  bool flagB = true;
  bool flagC = true;
  for(int i = 0; i < X + Y; i++){
    if(flagC == false){
      if(flagA == false){
	res += q[idxB];
	idxB++;
	continue;
      }
      if(flagB == false){
	res += p[idxA];
	idxA++;
	continue;
      }
      if(p[idxA] < q[idxB]){
	res += q[idxB];
	idxB++;
	if(idxB == B){
	  flagB = false;
	}
	continue;
      }else{
	res += p[idxA];
	idxA++;
	if(idxA == A){
	  flagA = false;
	}
	continue;
      }
    }
    if(flagA == false){
      if(r[idxC] > q[idxB]){
	res += r[idxC];
	idxC--;
	idxB++;
	if(idxC == -1){
	  flagC = false;
	}
      }else{
	res += q[idxB];
	idxB++;
      }
      continue;
    }
    if(flagB == false){
      if(r[idxC] > p[idxA]){
	res += r[idxC];
	idxC--;
	idxA++;
	if(idxC == -1){
	  flagC = false;
	}
      }else{
	res += p[idxA];
	idxA++;
      }
      continue;
    }
    if(p[idxA] < q[idxB]){
      if(p[idxA] < r[idxC]){
	res += r[idxC];
	idxC--;
	idxA++;
	if(idxA == A){
	  flagA = false;
	}
	if(idxC == -1){
	  flagC = false;
	}
      }else{
	res += p[idxA];
	idxA++;
	if(idxA == A){
	  flagA = false;
	}
      }
    }else{
      if(q[idxB] < r[idxC]){
	res += r[idxC];
	idxC--;
	idxB++;
	if(idxB == B){
	  flagB = false;
	}
	if(idxC == -1){
	  flagC = false;
	}
      }else{
	res += q[idxB];
	idxB++;
	if(idxB == B){
	  flagB = false;
	}
      }
    }
  }
  cout << res << endl;
}
