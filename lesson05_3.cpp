// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    int minIdx = 0;
    double avg, minAvg = 10000.0;
    
    for(int i=2;i<aLen;++i){
        avg = (A[i-1] + A[i]) / 2.0;
        if(avg < minAvg){
            minIdx = i-1;
            minAvg = avg;
        }
        
        avg = (A[i-2] + A[i-1] + A[i]) / 3.0;
        if(avg < minAvg){
            minIdx = i-2;
            minAvg = avg;
        }
    }
    
    avg = (A[0] + A[1]) / 2.0;
    if(avg <= minAvg){
        minIdx = 0;
        minAvg = avg;
    }
    
    return minIdx;
}
