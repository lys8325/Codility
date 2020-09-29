// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
bool check[100001];

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int aLen = A.size();
    int tmp, sum = 0, isAll = 0;
    
    for(int i=1;i<=X;++i){
        sum += i;
    }
    
    for(int i=0;i<aLen;++i){
        tmp = A[i];
        if(!check[tmp]){
            check[tmp] = true;
            isAll += tmp;
        }
        
        if(isAll == sum){
            return i;
        }
    }
    
    return -1;
}

