// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int addList[100001] = {0,};
    int aLen = A.size();
    int maxCounter = N+1;
    int idx = 0;
    int preMax = 0;
    int curMax = 0;
    int target = 0;
    vector<int> ans;
    
    for(int i=0;i<aLen;++i){
        idx = A[i];
        target = addList[idx];
        if(idx == maxCounter){
            preMax = curMax;
        }else{
            if(target < preMax){
                addList[idx] = preMax + 1;
            }else{
                addList[idx] = target + 1;
            }
            curMax = max(addList[idx], curMax);
        }
    }
    
    for(int i=1;i<=N;++i){
        target = addList[i];
        if(target < preMax){
            ans.push_back(preMax);
        }else{
            ans.push_back(target);
        }
    }
    
    return ans;    
}
