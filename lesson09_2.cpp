// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    if(aLen <= 1){
        return 0;
    }
    int maxP = 0;
    int minP[400000] = {A[0],};
    
    for(int i=1;i<aLen;++i){
        minP[i] = min(minP[i-1],A[i]);
    }
    
    for(int i=0;i<aLen;++i){
        maxP = max(maxP, A[i] - minP[i]);
    }
    
    return maxP;
}

