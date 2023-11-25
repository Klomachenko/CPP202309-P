#include <iostream>
#include <string>
using namespace std;

struct Contact
{
	string name;
	string phoneNumber;
	string email;
	string address;
};

int main()
{
	int choice;

	while (true)
	{
		cout << "\n===== 연락처 관리 시스템 =====\n";
		cout << "1. 연락처 추가\n";
		cout << "2. 그룹 생성\n";
		cout << "3. 연락처 검색\n";
		cout << "4. 연락처 수정\n";
		cout << "5. 연락처 삭제\n";
		cout << "6. 전체 연락처 보기\n";
		cout << "7. 나가기\n";
		cout << "원하시는 기능의 번호를 입력하세요: ";
		cin >> choice;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		switch (choice)
		{
		case 1:
			cout << "1. 연락처 추가\n";
			break;
		case 2:
			cout << "2. 그룹 생성\n";
			break;
		case 3:
			cout << "3. 연락처 검색\n";
			break;
		case 4:
			cout << "4. 연락처 수정\n";
			break;
		case 5:
			cout << "5. 연락처 삭제\n";
			break;
		case 6:
			cout << "6. 전체 연락처 보기\n";
			break;
		case 7:
			cout << "연락처를 종료합니다. 좋은 하루 되세요!\n";
			return 0;
		default:
			cout << "올바르지 않은 입력입니다. 제대로 된 값을 입력해주세요.\n";
		}
	}

	return 0;
}