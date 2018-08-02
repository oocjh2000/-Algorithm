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
문제번호: 1902
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/