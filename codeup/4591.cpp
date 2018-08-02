#include<iostream>
using namespace std;
int main() {
	int arr[9];
	int arr2[9];
	int res;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	for (int i = 1; i < 9; i++) {
		if (arr[0] < arr[i]) {
			arr[0] = arr[i];
		}
	}
	for (int i = 0; i < 9; i++) {
		if (arr[0] == arr2[i]) {
			res = i + 1;
		}
	}
	cout << arr[0] << endl << res;
}



/**************************************************************
문제번호: 4591
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/