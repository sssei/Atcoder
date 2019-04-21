#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int A,B,C; cin >> A >> B >> C;
    int min = (A < B) ? A : B;
    int max = (A > B) ? A : B;
    if (C < max && min < C){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}