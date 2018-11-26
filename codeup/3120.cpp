#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
 
int main() {
    int a, b, res;
    res = 0;
    cin >> a >> b;
    int dis = abs(b - a);
    while (dis != 0) {
        while (dis >= 8) {
            dis -= 10;
            res++;
        }
        while (dis >= 4) {
            dis -= 5;
            res++;
        }
        if (dis > 0) {
            dis--;
            res++;
        }
        else if(dis<0) {
            dis++;
            res++;
        }
    }
    cout << res;
    return 0;
}
/**************************************************************
    문제번호: 3120
    아이디: oocjh2000
    사용언어: C++
    결과: 정확한 풀이
    수행 시간:0 ms
    메모리 사용량:1712 kb
****************************************************************/
