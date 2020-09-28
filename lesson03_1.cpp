// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    if(X == Y){
        return 0;
    }
    int ans = (Y - X) / D;
    int remain = (Y - X) % D;
    if(remain > 0){
        ++ans;
    }
    
    return ans;
}

