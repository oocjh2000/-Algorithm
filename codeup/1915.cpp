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
������ȣ: 1915
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/