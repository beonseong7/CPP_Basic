#include<iostream>
#include<random>
int main() {
	using namespace std;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 1);
	if (dis(gen) == 1) {
		cout << "�����" << endl;
	}
	else if (dis(gen) == 0) {
		cout << "�ٳ�������" << endl;
	}
}