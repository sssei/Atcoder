#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << ", "
typedef long long ll;
const int MOD = 1000000007;

int N;
struct node{
  int num;
  int rank;
  int amt;
  struct node* ptr;
};
vector<node> G;

void init(){
  for(int i = 0; i < N; i++){
    G[i].num = i;
    G[i].ptr = NULL;
    G[i].rank = 1;
    G[i].amt = 1;
  }
}

int idx(int x){
  if(G[x].ptr == NULL){
    return x;
  }
  int tmp = idx(G[x].ptr->num);
  G[x].ptr = &G[tmp];
  return tmp;
}

int amount(int x){
  return G[idx(x)].amt;
}

void unite(int x, int y){
  if(idx(x) == idx(y)){
    return;
  }
  if(G[idx(x)].rank < G[idx(y)].rank){
    int a = amount(x);
    int b = amount(y);
    G[idx(x)].ptr = &G[idx(y)];
    G[idx(y)].amt = a + b;
  }else if(G[idx(x)].rank == G[idx(y)].rank){
    int a = amount(x);
    int b = amount(y);
    G[idx(x)].ptr = &G[idx(y)];
    G[idx(x)].amt = a + b;
    G[idx(y)].rank++;
  }else{
    int a = amount(x);
    int b = amount(y);
    G[idx(y)].ptr = &G[idx(x)];
    G[idx(x)].amt = a + b;
  }
  // cout << "unite" << x << " " << y << " " << idx(x) << " " << idx(y) << endl;
  return;
}

int main(){
  int Q;
  cin >> N >> Q;
  G.resize(N);
  init();
  for(int i = 0; i < Q; i++){
    // cout << "i=" << i << endl;
    for(int j = 0; j < N; j++){
      // cout << "idx" << j << " =" << idx(j) << endl;
    }
    int p,a,b;
    cin >> p >> a >> b;
    if(p == 0){
      unite(a, b);
    }else{
      if(idx(a) == idx(b)){
	cout << "Yes" << endl;
      }else{
	cout << "No" << endl;
      }
    }
  }
}
