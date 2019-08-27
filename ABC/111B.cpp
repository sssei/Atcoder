#include <iostream>

using namespace std;

int x(int n)
{
    return 100*n + 10*n + n;
}

int main()
{
    int N; cin >> N;

    for (int i = 1; i < 10; i++){
        if(x(i) >= N){
            cout << x(i) << endl;
            break;
        }
    }
}
