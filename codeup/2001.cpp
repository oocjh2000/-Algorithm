#include <iostream>
#include<string>
using namespace std;

int main() {
	float arr[3];
	float arr2[2];
	float tex;
	int cost;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> arr2[i];
	}
	for (int i = 1; i < 3; i++) {
		if (arr[0] > arr[i])
			arr[0] = arr[i];
	}
	if (arr2[0] > arr2[1])
		arr2[0] = arr2[1];
	cost = arr[0] + arr2[0];
	tex = cost / 10.0;
	printf("%.1f", cost + tex);

}

/**************************************************************
문제번호: 2001
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/