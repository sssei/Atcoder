#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N; cin >> N;
    vector <string> W(N);
    for (int i = 0; i < N; i++){
        cin >> W.at(i);
    }
    int cnt = 0;
    for (int i = 1; i < N; i++){
        if (W.at(i - 1)[-1] == W.at(i)[0])
            cnt += 1;
    }
    
}