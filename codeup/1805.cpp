#include <iostream>
#include<string>
using namespace std;

struct asdf
{
	int nun;
	int gas;
};
int main() {
	asdf asd[100];
	int n;
	asdf hold;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> asd[i].nun >> asd[i].gas;
	}
	for (int loop = 0; loop < n - 1; loop++) {
		for (int count = 0; count < n - 1 - loop; count++) {
			if (asd[count].nun > asd[count + 1].nun) {
				hold = asd[count + 1];
				asd[count + 1] = asd[count];
				asd[count] = hold;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << asd[i].nun << " " << asd[i].gas << endl;
	}
}


/**************************************************************
������ȣ: 1805
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/