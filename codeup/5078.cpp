#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<functional>
#include<string>

using namespace std;

string Judge_Triangle(int arr[3]) {
	int angle_sum = arr[0] + arr[1] + arr[2];
	if (angle_sum != 180) return "Error";
	if (arr[0] == 60 && arr[1] == 60 && arr[2] == 60)return "Equilateral";
	if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])return "Isosceles";
	else return "Scalene";

}
int main() {
	int angle[3];
	cin >> angle[0] >> angle[1] >> angle[2];
	cout << Judge_Triangle(angle);
}
/**************************************************************
������ȣ: 5078
���̵�: oocjh2000
�����: C++
���: ��Ȯ�� Ǯ��
���� �ð�:0 ms
�޸� ��뷮:1712 kb
****************************************************************/