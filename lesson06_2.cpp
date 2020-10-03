// you can use includes, for example:
#include <algorithm>
#include <queue>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int maxP = 0;
    int tmp1, tmp2, tmp3, posSize, nagSize;
    int aLen = A.size();
    priority_queue<int> pos;
    priority_queue<int, vector<int>, greater<int>> nagGreater;
    priority_queue<int> nagLess;
    
    for(int i=0;i<aLen;++i){
        if(A[i] >= 0){
            pos.push(A[i]);
        }else{
            nagGreater.push(A[i]);
            nagLess.push(A[i]);
        }
    }
    posSize = pos.size();
    nagSize = nagLess.size();
    
    if(posSize == 0){
        tmp1 = nagLess.top();
        nagLess.pop();
        tmp2 = nagLess.top();
        nagLess.pop();
        tmp3 = nagLess.top();
        nagLess.pop();
        maxP = tmp1 * tmp2 * tmp3;
    }else if(posSize == 1){
        tmp1 = pos.top();
        pos.pop();
        tmp2 = nagGreater.top();
        nagGreater.pop();
        tmp3 = nagGreater.top();
        nagGreater.pop();
        maxP = tmp1 * tmp2 * tmp3;
    }else if(posSize == 2){
        tmp1 = pos.top();
        pos.pop();
        tmp2 = pos.top();
        pos.pop();
        tmp3 = nagLess.top();
        nagLess.pop();
        maxP = tmp1 * tmp2 * tmp3;
        
        if(nagSize >= 2){
            tmp2 = nagGreater.top();
            nagGreater.pop();
            tmp3 = nagGreater.top();
            nagGreater.pop();
            maxP = max(maxP, tmp1*tmp2*tmp3);
        }
    }else{
        tmp1 = pos.top();
        pos.pop();
        tmp2 = pos.top();
        pos.pop();
        tmp3 = pos.top();
        pos.pop();
        maxP = tmp1 * tmp2 * tmp3;
        
        if(nagSize >= 2){
            tmp2 = nagGreater.top();
            nagGreater.pop();
            tmp3 = nagGreater.top();
            nagGreater.pop();
            maxP = max(maxP, tmp1*tmp2*tmp3);
        }
    }
    
    return maxP;
}

