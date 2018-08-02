#include<time.h>
#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int count = 0, num;
	while (1) {
		cin >> num;
		count++;
		if (count >= 5000000) {
			cout << num;
			break;
		}
		if (count % 50 == 0) {
			cout << num << " ";
		}

	}
}


/**************************************************************
문제번호: 3003
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:1780 ms
메모리 사용량:1704 kb
****************************************************************/