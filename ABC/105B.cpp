#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;
    if (N >= 18) cout << "Yes" << endl;
    else{
        switch(N){
            case 4 : 
            case 7 :
            case 8 :
            case 11 :
            case 12 :
            case 14 :
            case 15 :
            case 16 :
            cout << "Yes" << endl; break;
            default :
            cout << "No" << endl;
            break;
        }
    }
}