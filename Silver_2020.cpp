// you can use includes, for example:
#include <algorithm>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int ans = -1, a, b;
    map<int, int> list;
    
    for(int i=0;i<n;++i){
        a = A[i];
        b = B[i];
        if(a != b){
            if(list.find(a) == list.end()){
                list[a] = 1;
            }else{
                ++list[a];
            }
            
            if(list.find(b) == list.end()){
                list[b] = 1;
            }else{
                ++list[b];
            }
        }else{
            if(list.find(a) == list.end()){
                list[a] = 1;
            }else{
                ++list[a];
            }
        }
        
        ans = max(ans, list[a]);
        ans = max(ans, list[b]);
    }
    
    return ans;
}

