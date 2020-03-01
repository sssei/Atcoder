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
  if(G[idx(x)].rank > G[idx(y)].rank){
    int a = amount(x);
    int b = amount(y);
    G[idx(x)].ptr = &G[idx(y)];
    G[idx(y)].amt = a + b;
    G[idx(x)].amt = a + b;
  }else if(G[idx(x)].rank == G[idx(y)].rank){
    int a = amount(x);
    int b = amount(y);
    G[idx(x)].ptr = &G[idx(y)];
    G[idx(y)].amt = a + b;
    G[idx(x)].amt = a + b;
    G[idx(y)].rank++;
  }else{
    int a = amount(x);
    int b = amount(y);
    G[idx(y)].ptr = &G[idx(x)];
    G[idx(y)].amt = a + b;
    G[idx(x)].amt = a + b;
  }
  // cout << "unite" << x << " " << y << " " << idx(x) << " " << idx(y) << endl;
  return;
}

int main(){
  int M,K;
  cin >> N >> M >> K;
  G.resize(N);
  vector<int> F[N];
  init();
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    F[a].push_back(b);
    F[b].push_back(a);
    unite(a, b);
  }
  vector<int> B[N];
  for(int i = 0; i < K; i++){
    int c,d;
    cin >> c >> d;
    c--; d--;
    B[c].push_back(d);
    B[d].push_back(c);
  }
  for(int i = 0; i < N; i++){
    int tmp = amount(i);
    tmp -= F[i].size();
    for(auto x: B[i]){
      if(idx(x) == idx(i)){
	tmp--;
      }
    }
    tmp--;
    cout << tmp << " ";
  }
  cout << endl;
}
