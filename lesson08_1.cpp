// you can use includes, for example:
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    stack<pair<int, int>> s;
    int aLen = A.size();
    int dominator, idx, cnt;
    
    if(aLen == 0){
        return -1;
    }
    
    for(int i=0;i<aLen;++i){
        if(!s.empty()){
            if(s.top().first == A[i]){
                s.push({A[i], i});
            }else{
                s.pop();
            }            
        }else{
            s.push({A[i], i});
        }
    }
    
    if(s.empty()){
        return -1;
    }
    
    dominator = s.top().first;
    idx = s.top().second;
    
    cnt = 0;
    for(int i=0;i<aLen;++i){
        if(A[i] == dominator){
            ++cnt;
        }
    }
    
    return (cnt > aLen/2) ? idx : -1;
}
