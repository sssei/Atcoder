#include <iostream>

using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    cout<<((N%K)?1:0)<<endl;
    return 0;
}