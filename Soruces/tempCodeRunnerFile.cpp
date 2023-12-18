// tempCodeRunnerFile.cpp
void viewAllContacts()
{
	cout << "-------------------\n";

	cout << "==== 전체 연락처 목록 ====\n";
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