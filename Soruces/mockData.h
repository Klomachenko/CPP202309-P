#pragma once

#include <vector>
#include <string>

using namespace std;

struct Contact
{
  string name;
  string phoneNumber;
  string email;
  string address;
  string group;
};

extern vector<Contact> mockData;