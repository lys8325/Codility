// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    bool isGap = false;
    int ans = 0;
    int remain = 0;
    int gapCnt = 0;
    
    while(N > 0){
        remain = N % 2;
        N /= 2;
        
        if(isGap){
            if(remain == 1){
                ans = max(ans, gapCnt);
                gapCnt  = 0;
            }else{
                ++gapCnt;
            }
        }else{
            if(remain == 1){
                isGap = true;
            }
        }
    }
    
    return ans;
}

