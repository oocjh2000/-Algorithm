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
������ȣ: 2001
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/