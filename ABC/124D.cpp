#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int count(vector<int> vec, int idx){
    if (idx == 0){
        return vec.at(0) + vec.at(1);
    }else{
        return vec.at(idx - 1) + vec.at(idx) + vec.at(idx);
    }
}

int main()
{
    int N,K; cin >> N >> K;
    int S; cin >> S;
    vector <int> vec(N);
    int flag = 0;
    if (S[0] == '1') flag++;
    int flag2 = flag;
    int cnt = 0;

    for (int i = 0; i < N; i++){
        if (S[i] == '0' + flag){
            vec[cnt]++;
        }else{
            cnt++;
            vec[cnt] = 1;
            flag++;
            flag = flag % 2;
        }
    }

    int k = 0;
    while (k <= K && cnt > 1){
        int idx = 0 + flag2;
        int max1 = idx;
        while (idx <= cnt - 1){
            if (count(vec,max1) < count(vec,idx)){
                max1 = idx;
            }
            idx += 2;
        }
        if (max1 == 0){
            vec.at(max1) += vec.at(max1+1);
            vec.erase(vec.begin() + 1);
            cnt--;
        }else if (max1 == cnt - 1){
            vec.at(max1) += vec.at(max1-1);
            vec.erase(vec.begin() + max1 - 1);
            cnt--;
        }else{
            vec.at(max1) += vec.at(max1-1) + vec.at(max1+1);
            vec.erase(vec.begin() + max1 - 1);
            vec.erase(vec.begin() + max1 + 1);
            cnt -= 2;
        }

    }


    
}
