// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    int target1=0, target2;
    
    sort(A.begin(), A.end());
    for(int i=0;i<aLen;++i){
        target1 = A[i++];
        if(i == aLen-1){
            break;
        }
        target2 = A[i];
        if(target1 != target2){
            break;
        }
    }
    
    return target1;
}
