#include<iostream>
using namespace std;
void recPrint(int x, int y)
{
	if (y < x) return;

	recPrint(x + 1, y);

	cout << x << endl;

}
int main() {
	int n_1 = 1;
	int n; cin >> n;
	recPrint(n_1, n);
}


/**************************************************************
������ȣ: 1902
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/