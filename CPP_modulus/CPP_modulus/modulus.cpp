#include <iostream>

int main() {
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "����� ü���� �Ŀ�� ������ �Է��Ͻʽÿ�: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn; // lbs�������� Lbs_per_stn���� ���� ���� �����Ѵ�.
	int pounds = lbs % Lbs_per_stn; // lbs�������� Lbs_per_stn���� ���� �������� �����Ѵ�.
	cout << lbs << " �Ŀ��� " << stone
		<< " ����, " << pounds << "�Ŀ���Դϴ�.\n";
	return 0;
}