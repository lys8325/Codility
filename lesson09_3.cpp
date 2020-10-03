// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    int maxSum = -1000000, end = 0;
    
    for(int i=0;i<aLen;++i){
        end = max(A[i], A[i]+end);
        maxSum = max(maxSum, end);
    }
    
    return maxSum;
}
