#include <iostream>

using namespace std;

int main(){
    int N; cin >> N;
    if(N < 105) cout << 0;
    else if(N < 135) cout << 1;
    else if(N < 165) cout << 2;
    else if(N < 189) cout << 3;
    else if(N < 195) cout << 4;
    else cout << 5 << endl;
}