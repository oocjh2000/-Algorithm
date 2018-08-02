#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<functional>

using namespace std;

int IDOL_MASTER(int n) {
	int res = 1;
	for (int i = n - 3; i <= n; i++)
		res *= i;
	return res;
}
int main() {
	int n;
	cin >> n;
	cout << IDOL_MASTER(n);
}
/**************************************************************
문제번호: 2744
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/