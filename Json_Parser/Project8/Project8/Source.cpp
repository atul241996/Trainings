#include "json/json.h"
#include<iostream>
#include <fstream>
#include<string>

using namespace std;
void ReadJsonData()
{
	ifstream file("C:\\Users\\Administrator\\source\\repos\\Project8\\Project8\\people.txt", ios::in, ios::binary);
	Json::Value root;
	Json::Reader reader;
	char ch;
	string data = "";
	if (file.fail())
	{
		cout << "file could not be created";
		return;
	}

	while (file.read((char*)&ch, 1))
	{
		data = data + ch;
	}
	bool parsingSuccessfull = reader.parse(data, root,false);
	if (!parsingSuccessfull)
	{
		cout << reader.getFormattedErrorMessages();
		return;
	}
	cout << root["glossary"]["title"];
}


void main()
{
	ReadJsonData();
	getchar();
}