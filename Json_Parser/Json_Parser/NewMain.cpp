//#include "cpprest/containerstream.h"
//#include "cpprest/filestream.h"
//#include "cpprest/http_client.h"
//#include "cpprest/json.h"
//#include "cpprest/producerconsumerstream.h"
//#include <iostream>
//#include <sstream>
//
//using namespace ::pplx;
//using namespace utility;
//using namespace concurrency::streams;
//using namespace std;
//using namespace web;
//using namespace web::http;
//using namespace web::http::client;
//using namespace web::json;
//
//json::value ReadJsonData(std::string input)
//{
//	json::value root;
//	//string data = "",s;
//	/*if (file.fail())
//	{
//	cout << "file could not be created";
//	exit(1);
//	}*/
//	std :: stringstream ss(input);
//	root = json:: value ::parse(ss);
//	return root;
//}
//void Find(json::value &, vector<std::string> &);
//void Find(json::value&, std::string);
//
//void GetValueFromKey(std::string input, json::value & root)
//{
//	int curr_index, prev_index = 0, index;
//	vector<std::string> tokens;
//	curr_index = input.find(".");
//	if (curr_index == std::string::npos)
//	{
//		switch (root.)
//		{
//		case true:
//			std::cout << "Please Enter the index : ";
//			std::cin >> index;
//			std::cout << endl << (root.as_array().begin());
//			break;
//			
//		case false:
//			string output =  root.as_string();
//			break;
//		}
//	}
//	while (curr_index != std::string::npos)
//	{
//		tokens.push_back(input.substr(prev_index, curr_index - prev_index));
//		prev_index = curr_index + 1;
//		curr_index = input.find(".", prev_index);
//	}
//	tokens.push_back(input.substr(prev_index, curr_index - prev_index));
//	try {
//		cout << endl << input << " : " << "\n\n";
//		Find(root, tokens);
//	}
//	catch (Json::Exception &e)
//	{
//		cerr << e.what() << endl;
//	}
//
//}
//
//void Find(Json::Value &root, string input)
//{
//	int index;
//	switch (root[input].type())
//	{
//	case 0:
//		break;
//	case 1:
//		cout << endl << root;
//		break;
//	case 2:
//
//		cout << endl << root;
//		break;
//	case 3:
//		cout << endl << root;
//		break;
//	case 4:
//		cout << endl << root;
//		break;
//	case 5:
//		cout << endl << root;
//		break;
//	case 6:
//		cout << endl << root;
//		cout << "\nPlease Enter the array index";
//		cin >> index;
//		cout << "\n\n" << root[index];
//		break;
//	case 7:
//		cout << root[input];
//		break;
//	}
//}
//
//
//void Find(Json::Value &root, vector<string> &tokens)
//{
//	vector<string> ::iterator it;
//	int index;
//	while (!tokens.empty())
//	{
//		vector<string> ::iterator tok_itr = tokens.begin();
//		vector<string> members = root.getMemberNames();
//		vector<string> ::iterator mem_itr = members.begin();
//		if ((it = find(members.begin(), members.end(), *tok_itr)) != members.end())
//		{
//			switch (root[*it].type())
//			{
//			case 0:
//				break;
//			case 1:
//				tokens.erase(tok_itr);
//				cout << endl << root[*it];
//				break;
//			case 2:
//				tokens.erase(tok_itr);
//				cout << endl << root[*it];
//				break;
//			case 3:
//				tokens.erase(tok_itr);
//				cout << endl << root[*it];
//				break;
//			case 4:
//				tokens.erase(tok_itr);
//				cout << endl << root[*it];
//				break;
//			case 5:
//				tokens.erase(tok_itr);
//				cout << endl << root[*it];
//				break;
//			case 6:
//				tokens.erase(tok_itr);
//				cout << endl << root[*it];
//				if (tokens.empty())
//				{
//					cout << "\nPlease Enter the array index";
//					cin >> index;
//					cout << "\n\n" << root[index];
//				}
//				break;
//			case 7:
//				root = root[*it];
//				tokens.erase(tok_itr);
//				if (tokens.empty())
//					cout << root;
//				break;
//			}
//
//		}
//	}
//}
//void main(char* argv[])
//{
//	string input;
//	json::value data = ReadJsonData(argv);
//	GetValueFromKey("todos" , data);
//	getchar();
//}