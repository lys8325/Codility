// you can use includes, for example:
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int ans=0, leader=0, cnt=0;
    int aLen = A.size();
    stack<int> s;
    int leaderCnt[100001] = {0,};
    
    if(aLen == 1){
        return 0;
    }
    
    for(int i=0;i<aLen;++i){
        if(s.empty()){
            s.push(A[i]);
        }else{
            if(s.top() == A[i]){
                s.push(A[i]);
            }else{
                s.pop();
            }
        }
    }
    
    if(s.empty()){
        return 0;
    }
    
    leader = s.top();
    for(int i=0;i<aLen;++i){
        if(i>0){
            leaderCnt[i] = leaderCnt[i-1];
        }
        if(leader == A[i]){
            ++cnt;
            ++leaderCnt[i];
        }
    }
    
    if(cnt <= aLen/2){
        return 0;
    }
    
    --aLen;
    for(int i=0;i<aLen;++i){
        int tmp = leaderCnt[i];
        if(tmp > (i+1)/2 && (cnt - tmp) > (aLen-i)/2){
            ++ans;
        }
    }
    
    return ans;
}

