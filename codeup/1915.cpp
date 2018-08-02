#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int pibo(int x) {

	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else return pibo(x - 1) + pibo(x - 2);

}

int main() {
	int n;
	cin >> n;
	cout << pibo(n);

	return 0;

}




/**************************************************************
문제번호: 1915
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/