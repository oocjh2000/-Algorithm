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
������ȣ: 3001
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:12 ms
�޸� ��뷮:1984 kb
****************************************************************/