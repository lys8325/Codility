// you can use includes, for example:
#include <cmath>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int i=1;
    int result = 0;
    double sqrND = sqrt(N);
    int sqrNI = sqrt(N);
    
    while(i < sqrND){
        if(N % i == 0){
            ++result;    
        }
        ++i;
    }
    
    result *= 2;
    
    if(sqrND == sqrNI){
        ++result;
    }
    
    return result;
}

