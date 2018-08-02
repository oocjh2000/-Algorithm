#include<time.h>
#include<iostream>
using namespace std;
int main() {
	int n, j[100000], k, res;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> j[i];
	}
	cin >> k;
	for (int i = 0; i < n; i++) {
		if (k == j[i]) {
			res = i;
			break;
		}
		else if (i == n - 1) {
			cout << "-1";
			exit(-1);
		}
	}
	cout << res + 1;
	return 0;
}
/**************************************************************
문제번호: 3001
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:12 ms
메모리 사용량:1984 kb
****************************************************************/