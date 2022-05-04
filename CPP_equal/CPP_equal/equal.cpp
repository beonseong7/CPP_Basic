#include<iostream>
int main() {
	using namespace std;
	int quizscores[10] =
	{ 20,20,20,20,20,19,20,18,20,20 };
	cout << "올바른 방법:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++) // 탈출문에 올바르게 비교연산자가 사용되어 개발자의 의도대로 작동된다.
		cout << i << "번 퀴즈의 점수는 20입니다.\n";
	cout << "잘못된 방법:\n";
	for (i = 0; quizscores[i] = 20; i++)//비교연산자 == 이아닌 대입연산자가 사용되어 무한루프가 진행된다.
		cout << i << "번 퀴즈의 점수는 20입니다.\n";
	return 0;
}