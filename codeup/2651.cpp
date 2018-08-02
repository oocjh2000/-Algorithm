#include<iostream>
#include<iomanip>
#include<algorithm>
#include<stdio.h>
#include<functional>
#include<string>

using namespace std;
unsigned long long int pact(int n, int k) {
	if (k == n)return 1;
	else if (k == 1)return n;
	else return pact(n - 1, k - 1) + pact(n - 1, k);
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << pact(a, b);

}
/**************************************************************
     문제번호: 2651
	 아이디: oocjh2000
	 사용언어: C++
	 결과: 정확한 풀이
	 수행 시간:20 ms
	 메모리 사용량:1712 kb
****************************************************************/