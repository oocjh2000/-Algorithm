#include<iostream>
using namespace std;
void recPrint(int x, int y) {
	if (x > y)return;
	if (x % 2 == 1)cout << x << " ";
	recPrint(x + 1, y);
}



int main() {
	int a, b;
	cin >> a >> b;
	recPrint(a, b);
	//system("pause");
}

/**************************************************************
������ȣ: 1904
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/