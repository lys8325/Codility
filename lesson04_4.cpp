// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int aLen = A.size();
    int idx = 1;
    bool isPermu = true;
    
    for(int i=0;i<aLen;++i){
        if(A[i] != idx++){
            isPermu = false;
            break;
        }
    }
    
    return isPermu ? 1 : 0;   
}
