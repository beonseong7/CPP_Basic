#include<iostream>
#include<fstream>
#include<cstdlib>
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하시오: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()) //경로에 해당 파일이 있는지 확인
	{
		cout << filename << " 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	while (inFile.good())//데이터 불일치 또는 데이터의 끝이면 break
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())//파일 끝 여부 확인
		cout << "파일 끝에 도달했습니다.\n";
	else if (inFile.fail())//데이터 불일치 여부 확인
		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
	else
		cout << "알수없는 이유로 입력이 종료되었습니다.\n";
	if (count == 0)
		cout << "데이터가 없습니다.\n";
	else
	{
		cout << "읽은 항목의 개수: " << count << endl;
		cout << "합계: " << sum << endl;
		cout << "평균: " << sum / count << endl;
	}
	inFile.close();
	return 0;
}