// you can use includes, for example:
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> unpaired;
    int aLen = A.size();
    int target;
    
    for(int i=0;i<aLen;++i){
        target = A[i];
        auto iter = unpaired.find(target);
        if(iter != unpaired.end()){
            unpaired.erase(iter);
        }else{
            unpaired.insert(target);
        }
    }
    
    return *unpaired.begin();
}

