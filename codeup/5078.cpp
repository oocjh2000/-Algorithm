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
문제번호: 5078
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:0 ms
메모리 사용량:1712 kb
****************************************************************/