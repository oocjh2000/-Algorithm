#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<functional>
#include<string>

using namespace std;
struct team
{
	int win;
	int lose;
	int duce;
	int score;
	bool operator<(team a) { return this->score < a.score; }
};
int score(team a) {
	int res = 0;
	res += a.win * 3;
	res += a.duce;
	return res;
}

int main() {
	int n, rank;
	team* KBO;
	team* KBo_copy;
	cin >> n >> rank;
	KBO = new team[n];
	KBo_copy = new team[n];
	for (int i = 0; i < n; i++) {
		cin >> KBO[i].win >> KBO[i].duce >> KBO[i].lose;
		KBO[i].score = score(KBO[i]);
		KBo_copy[i] = KBO[i];
	}
	team hold;
	for (int loop = 0; loop < n - 1; loop++) {
		for (int i = 0; i < n - 1 - loop; i++) {
			if (KBo_copy[i].score > KBo_copy[i + 1].score) {
				hold = KBo_copy[i];
				KBo_copy[i] = KBo_copy[i + 1];
				KBo_copy[i + 1] = hold;
			}
		}
	}
	for (int i = 1; i <= n; i++)
		if (KBO[rank - 1].score == KBo_copy[n - i].score) {
			cout << i;
			break;
		}
}
/**************************************************************
문제번호: 4067
아이디: oocjh2000
사용언어: C++
결과: 정확한 풀이
수행 시간:288 ms
메모리 사용량:2000 kb
****************************************************************/