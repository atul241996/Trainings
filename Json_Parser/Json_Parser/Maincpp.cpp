#include "json/json.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>


using namespace std;
Json::Value ReadJsonData(string input)
{
	//ifstream file("people.json", ios::in, ios::binary);
	Json::Reader reader;
	Json::Value root;
	//string data = "",s;
	/*if (file.fail())
	{
		cout << "file could not be created";
		exit(1);
	}*/

	bool parsingSuccessfull = reader.parse(input , root, false);
	if (!parsingSuccessfull)
	{
		cout << reader.getFormattedErrorMessages();
		exit(1);
	}
	return root;
}
void Find(Json::Value &, vector<string> &);
void Find(Json::Value&, string);

void GetValueFromKey(Json::Value &root)
{
	cout <<endl << root;
}
void GetValueFromKey(string input, Json::Value &root)
{
	int curr_index, prev_index = 0;
	vector<string> tokens;
	curr_index = input.find(".");
	if (curr_index == string::npos)
	{
		if (root.begin().name() == input)
		{
			Find(root,input);
			return;
		}
		else
		{
			cout << "No such key present in the data";
			return;
		}
	}
	while ( curr_index!= std::string::npos)
	{
		tokens.push_back(input.substr(prev_index, curr_index - prev_index));
		prev_index = curr_index + 1;
		curr_index = input.find(".", prev_index);
	}
	tokens.push_back(input.substr(prev_index, curr_index - prev_index));
	try {
		cout << endl << input << " : "<< "\n\n";
         Find(root, tokens);
	}
	catch (Json::Exception &e)
	{
		cerr << e.what() << endl;
	}

}

void Find(Json::Value &root, string input)
{
	int index;
	switch (root[input].type())
	{
	case 0:
		break;
	case 1:
		  cout << endl << root;
		  break;
	case 2:
		
		cout << endl << root;
		break;
	case 3:
		cout << endl << root;
		break;
	case 4:
		cout << endl << root;
		break;
	case 5:
		cout << endl << root;
		break;
	case 6:
		cout << endl << root;
		cout << "\nPlease Enter the array index";
		cin >> index;
		cout << "\n\n" << root[index]; 
		break;
	case 7:
			cout << root[input];
		break;
	}
}


void Find(Json::Value &root, vector<string> &tokens)
{
	vector<string> ::iterator it;
	int index;
	while (!tokens.empty())
	{
		vector<string> ::iterator tok_itr = tokens.begin();
		vector<string> members = root.getMemberNames();
		vector<string> ::iterator mem_itr = members.begin();
		if ((it = find(members.begin(), members.end(), *tok_itr)) != members.end())
		{
			switch (root[*it].type())
			{
			case 0:
				break;
			case 1:
				tokens.erase(tok_itr);
				cout << endl << root[*it];
				break;
			case 2:
				tokens.erase(tok_itr);
				cout << endl << root[*it];
				break;
			case 3:
				tokens.erase(tok_itr);
				cout << endl << root[*it];
				break;
			case 4:
				tokens.erase(tok_itr);
				cout << endl << root[*it];
				break;
			case 5:
				tokens.erase(tok_itr);
				cout << endl << root[*it];
				break;
			case 6:
				tokens.erase(tok_itr);
				cout << endl << root[*it];
				if (tokens.empty())
				{
					cout << "\nPlease Enter the array index";
					cin >> index;
					cout << "\n\n" << root[index];
				}				
				break;
			case 7:
				root = root[*it];
				tokens.erase(tok_itr);
				if (tokens.empty())
					cout << root;
				break;
			}

		}
	}
}
void main()
{
	fstream file;
	file.open("emp.json", ios::in, ios::binary);
	string input = "", temp;
	if (file.fail())
	{
		cout << "file could not be created";
		exit(1);
	}
	while (getline(file, temp))
	{
		input = input + temp;
	}
	Json ::Value data = ReadJsonData(input);
	if (data.begin().key().isArray())
		GetValueFromKey(data);
	else
		GetValueFromKey("", data);
		getchar();
		getchar();
}