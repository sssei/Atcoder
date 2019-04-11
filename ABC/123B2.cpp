#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int inf = 1000000;

int main()
{
    vector <int> A(5);
    vector <int> P = {0, 1, 2, 3, 4};

    for (int i = 0; i < 5; i++){
          cin >> A.at(i);
    }
    int final_answer = inf;
    do{
        int ans = 0;
        for (int i = 0; i < 5; i++){
            while (ans%10 != 0) ans++;
            ans += A.at(P.at(i));
        }
        final_answer = min(final_answer, ans);
    }while(next_permutation(P.begin(),P.end()));

    cout << final_answer << endl;
} 