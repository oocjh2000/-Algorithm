#include<iostream>
using namespace std;
void recPrint(int x)
{
	if (x == 0) return;

	recPrint(x - 1);

	cout << x << endl;

}
int main() {
	int n; cin >> n;
	recPrint(n);
}

/**************************************************************
������ȣ: 1901
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/