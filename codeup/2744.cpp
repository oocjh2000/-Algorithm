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
������ȣ: 2744
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/