// you can use includes, for example:
#include <algorithm>
#include <memory.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

void pr(int arr[], int l){
    for(int i=1;i<=l;++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> ans;
    int addList[100001] = {0,};
    
     int idx=0, preMax=0, curMax=0, maxCounter=N+1;
     int aLen = A.size();
     int tmp;
     for(int i=0;i<aLen;++i){
         idx = A[i];
         if(idx == maxCounter){
             preMax = curMax;
         }else{
             tmp = addList[idx]+1;
             if(tmp <= preMax){
                 addList[idx] = preMax+1;
             }else{
                 addList[idx] = tmp;
             }
             curMax = max(curMax, tmp);
         }
     }
     
     for(int i=1;i<=N;++i){
         tmp = addList[i];
         if(tmp < preMax){
             tmp = preMax;
         }
         ans.push_back(tmp);
     }
     
     return ans;
}
