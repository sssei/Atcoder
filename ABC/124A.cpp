#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    if (A == B){
        cout << 2*A << endl;
    }else if(A > B){
        cout << A + A - 1 << endl;
    }else{
        cout << B + B - 1 << endl;
    }
    
}
