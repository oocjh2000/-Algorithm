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
������ȣ: 4591
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/