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
������ȣ: 3003
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:1780 ms
�޸� ��뷮:1704 kb
****************************************************************/