#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
 
int main() {
    int B, N, A;
    cin >> B >> N;
    double root = pow(B, 1.0 / (double)N);
    int dis1 = abs(B - pow(ceil(root), N));
    int dis2 = abs(B - pow(floor(root), N));
    int res;
    if (dis1 < dis2)
        res = ceil(root);
    else
        res = floor(root);
 
        printf("%d", res);
    return 0;
 
}
/**************************************************************
    문제번호: 2010
    아이디: oocjh2000
    사용언어: C++
    결과: 정확한 풀이
    수행 시간:0 ms
    메모리 사용량:1908 kb
****************************************************************/
