// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    int target = 0;
    int min = 1;
    sort(A.begin(), A.end());
    for(int i=0;i<aLen;++i){
        target = A[i];
        //printf("cur : %d      min : %d\n", target, min);
        if(target <= 0){
            continue;
        }else{
            if(target > min){
                break;
            }else if(target < min){
                continue;
            }else{
                ++min;
            }
        }
    }
    
    return min;
}

