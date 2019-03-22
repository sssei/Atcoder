#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = (int)str.size();
    int s[len - 2];
    for (int i = 0; i < len - 2; i++){
        s[i] = 100*(str[i] - '0') + 10*(str[i + 1] - '0') + (str[i + 2] - '0');  
        s[i] = abs(753 - s[i]);  
    }
    sort(s,s+len-2);
    cout << s[0] << endl;
}