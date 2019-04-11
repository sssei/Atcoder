#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k;
    vector <int> antennas(5);
    for (int i = 0; i < 5; i++){
        cin >> antennas.at(i);
    }
    cin >> k;
    int length = antennas.at(4) - antennas.at(0);
    if (length <= k){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }
}