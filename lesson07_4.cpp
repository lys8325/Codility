// you can use includes, for example:
// #include <algorithm>
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> wall;
    wall.push(H[0]);
    int wallCnt = 1;
    int target, preWall;
    int hLen = H.size();
    
    for(int i=1;i<hLen;++i){
        target = H[i];
        preWall = wall.top();
        
        if(target > preWall){
            ++wallCnt;
        }else if(target < preWall){
            while(!wall.empty() && target < wall.top()){
                wall.pop();
            }
            
            if(wall.empty() || target > wall.top()){
                ++wallCnt;
            }
        }
        wall.push(target);
    }
    
    return wallCnt;
}

