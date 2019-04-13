#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int H,W;
    cin >> H >> W;
    vector <string> a(H);
    for (int i = 0; i < H; i++){
        cin >> a.at(i);
    }
    int cnt = 0;
    for (int i = 0; i < H - cnt; i++){
        if(a.at(i - cnt) == string('.',W)){
            a.erase(a.begin() + i - cnt);
            cnt++;
        }
    }
    
    int cnt2 = 0;
    for (int j = 0; j < W - cnt2; j++){
        for (int i = 0; i < H - cnt; i++){
            if (a[i][j] != '.') break;
        }
        continue 
    }
}