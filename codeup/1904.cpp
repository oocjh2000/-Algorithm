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
문제번호: 1904
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/