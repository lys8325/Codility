// you can use includes, for example:
#include <algorithm>
#include <cmath>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int prefix = A[0];
    int suffix = 0;
    
    for(int i=1;i<n;++i){
        suffix += A[i];
    }
    
    int ans = abs(prefix-suffix);
    int tmp = 0;
    for(int i=1;i<n-1;++i){
        tmp += A[i];
        ans = min(ans, abs((prefix+tmp) - (suffix-tmp)));
    }
    
    return ans;
}

