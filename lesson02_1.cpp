// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> result = A;
    vector<int> tmp;
    int aLen, cnt;
    
    aLen = A.size();
    if(K == 0 || aLen == 0){
        return result;
    }
    cnt = K % aLen;
    
    for(int i=0;i<cnt;++i){
        tmp.push_back(result[aLen-1]);
        for(int j=0;j<aLen-1;++j){
            tmp.push_back(result[j]);
        }
        result = tmp;
        tmp.clear();
    }
    return result;
}
