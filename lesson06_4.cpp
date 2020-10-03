// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    sort(A.begin(), A.end());
    
    for(int i=2;i<aLen;++i){
        long long sum = (long long)A[i-2] + (long long)A[i-1];
        if(sum > A[i]){
            return 1;
        }
    }
    
    return 0;
}

