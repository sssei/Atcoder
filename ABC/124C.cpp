#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int N = (int)S.length();
    int flag = 0;
    int cnt1 = 0;
    int cnt2 = 0;


    for (int i = 0; i < N; i++){
        if (S[i] != '0' + (flag%2)){
            cnt1++;
        }
        flag++;
    }

    flag = 0;

    for (int i = 0; i < N; i++){
        if (S[i] == '0' + (flag%2)){
            cnt2++;
        }
        flag++;
    }

    cout << min(cnt1,cnt2) << endl;

}
