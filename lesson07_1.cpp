// you can use includes, for example:
// #include <algorithm>
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
stack<int> b;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int sLen = S.length();
    char target;
    for(int i=0;i<sLen;++i){
        target = S[i];
        if(target == ')'){
            if(b.empty()){
                return 0;
            }
            while(b.top() != '('){
                b.pop();
                if(b.empty()){
                    return 0;
                }
            }
            b.pop();
        }else if(target == ']'){
            if(b.empty()){
                return 0;
            }
            while(b.top() != '['){
                b.pop();
                if(b.empty()){
                    return 0;
                }
            }
            b.pop();
        }else if(target == '}'){
            if(b.empty()){
                return 0;
            }
            while(b.top() != '{'){
                b.pop();
                if(b.empty()){
                    return 0;
                }
            }
            b.pop();
        }else{
            b.push(target);
        }
    }
    
    return b.empty() ? 1 : 0;
}

