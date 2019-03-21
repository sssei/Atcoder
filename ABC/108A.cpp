#include <iostream>

using namespace std;

int main()
{
    int K,ans;
    cin >> K;
    if (K % 2)
        ans = K/2 * ((K + 1)/2);
    else
        ans = K/2 * (K/2);
    cout << ans << endl;
    
    return 0;
}