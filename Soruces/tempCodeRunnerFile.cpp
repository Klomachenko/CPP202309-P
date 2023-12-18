// 전체 연락처 파일에 저장
void saveContactsToFile(const string &fileName)
{
	ofstream outFile(fileName);
	if (!outFile.is_open())
	{
		cerr << "Error: Could not open the file " << fileName << " for writing." << endl;
		return;
	}

	for (const auto &contact : contactList)
	{
		outFile << contact.name << ","
						<< contact.phoneNumber << ","
						<< contact.email << ","
						<< contact.address << ","
						<< contact.group << "\n";
	}

	outFile.close();
}