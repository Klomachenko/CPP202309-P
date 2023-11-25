#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Contact
{
	string name;
	string phoneNumber;
	string email;
	string address;
	string group;
};

// 전역 연락처 목록
std::vector<Contact> contactList;

// 주소록에 연락처 추가
void addContact()
{
	cout << "-------------------\n";

	cout << "연락처 정보를 입력하세요:\n";

	Contact newContact;

	// 필수 필드 입력
	cout << "이름 (필수): ";
	getline(cin, newContact.name);

	cout << "전화번호 (필수): ";
	getline(cin, newContact.phoneNumber);

	// 추가 정보 입력
	cout << "이메일: ";
	getline(cin, newContact.email);

	cout << "주소: ";
	getline(cin, newContact.address);

	// 그룹 입력
	cout << "그룹: ";
	getline(cin, newContact.group);

	// 연락처 추가
	contactList.push_back(newContact);

	cout << "연락처를 성공적으로 추가하였습니다!\n";
}

// 전체 연락처 출력
void viewAllContacts()
{
	cout << "전체 연락처 목록:\n";
	for (const auto &contact : contactList)
	{
		cout << "이름: " << contact.name << "\n";
		cout << "전화번호: " << contact.phoneNumber << "\n";
		cout << "이메일: " << contact.email << "\n";
		cout << "주소: " << contact.address << "\n";
		cout << "그룹: " << contact.group << "\n"; // 그룹 출력 추가
		cout << "-------------------\n";
	}
}

// 연락처 수정
void modifyContact()
{
	cout << "수정할 연락처의 이름을 입력하세요:\n";
	string name;
	getline(cin, name);

	// 이름으로 연락처 찾기
	auto it = find_if(contactList.begin(), contactList.end(), [name](const Contact &contact)
					  { return contact.name == name; });

	if (it != contactList.end())
	{
		cout << "새로운 연락처 정보를 입력하세요:\n";

		// 필수 필드 입력
		cout << "이름 (필수): ";
		getline(cin, it->name);

		cout << "전화번호 (필수): ";
		getline(cin, it->phoneNumber);

		// 추가 정보 입력
		cout << "이메일: ";
		getline(cin, it->email);

		cout << "주소: ";
		getline(cin, it->address);

		// 그룹 입력
		cout << "그룹: ";
		getline(cin, it->group);

		cout << "연락처를 성공적으로 수정하였습니다!\n";
		cout << "-------------------\n";

		// 수정된 연락처 정보 출력
		cout << "수정된 연락처 정보:\n";
		cout << "이름: " << it->name << "\n";
		cout << "전화번호: " << it->phoneNumber << "\n";
		cout << "이메일: " << it->email << "\n";
		cout << "주소: " << it->address << "\n";
		cout << "그룹: " << it->group << "\n";
		cout << "-------------------\n";
	}
	else
	{
		cout << "해당하는 이름의 연락처가 없습니다.\n";
	}
}

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
		cout << "-------------------\n";
		cout << "원하시는 기능의 번호를 입력하세요: ";
		cin >> choice;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		switch (choice)
		{
		case 1:
			cout << "연락처 추가하기를 선택하셨습니다.\n";
			addContact();
			break;
		case 2:
			cout << "2. 그룹 생성\n";
			break;
		case 3:
			cout << "3. 연락처 검색\n";
			break;
		case 4:
			cout << "연락처 수정하기를 선택하셨습니다.\n";
			modifyContact();
			break;
		case 5:
			cout << "5. 연락처 삭제\n";
			break;
		case 6:
			cout << "전체 연락처 보기를 선택하셨습니다.\n";
			viewAllContacts();
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