// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int ans = 1;
    if(n == 0){
        return ans;
    }
    
    sort(A.begin(), A.end());
    for(int i=0;i<n;++i){
        ans = i+1;
        if(ans != A[i]){
            break;
        }
    }
    
    if(ans == A[n-1]){
        ++ans;
    }
    
    return ans;
}

