// you can use includes, for example:
#include <algorithm>
#include <memory.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    int qLen = P.size();
    int strLen = S.length();
    int p, q;
    int a[100001] = {0,};
    int c[100001] = {0,};
    int g[100001] = {0,};
    vector<int> ans;
    
    for(int i=0;i<strLen;++i){
        if(S[i] == 'A'){
            a[i+1] = a[i]+1;
            c[i+1] = c[i];
            g[i+1] = g[i];
        }else if(S[i] == 'C'){
            a[i+1] = a[i];
            c[i+1] = c[i]+1;
            g[i+1] = g[i];
        }
        else if(S[i] == 'G'){
            a[i+1] = a[i];
            c[i+1] = c[i];
            g[i+1] = g[i]+1;
        }else{
            a[i+1] = a[i];
            c[i+1] = c[i];
            g[i+1] = g[i];
        }
    }
 
    for(int i=0;i<qLen;++i){
        p = P[i]; q = Q[i]+1;
        
        if(a[p] != a[q]){
            ans.push_back(1);
        }else if(c[p] != c[q]){
            ans.push_back(2);
        }else if(g[p] != g[q]){
            ans.push_back(3);
        }else{
            ans.push_back(4);
        }
    }
    
    return ans;
}
