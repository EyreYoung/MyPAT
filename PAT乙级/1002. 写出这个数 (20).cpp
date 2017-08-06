//读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
//
//输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。
//
//输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。
//
//输入样例：
//1234567890987654321123456789
//输出样例：
//yi san wu

#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int temp;
	int sum = 0;
	
	for (int i = 0; i < s.size(); i++){
		stringstream ss;
		ss << s.substr(i, 1);
		ss >> temp;
		sum += temp;
	}
	stringstream ss;
	string ssum;
	ss << sum;
	ss >> ssum;
	for (int i = 0; i < ssum.size() - 1; i++){
		if (ssum.substr(i, 1).compare("0") == 0){
			cout << "ling ";
		}
		if (ssum.substr(i, 1).compare("1") == 0){
			cout << "yi ";
		}
		if (ssum.substr(i, 1).compare("2") == 0){
			cout << "er ";
		}
		if (ssum.substr(i, 1).compare("3") == 0){
			cout << "san ";
		}
		if (ssum.substr(i, 1).compare("4") == 0){
			cout << "si ";
		}
		if (ssum.substr(i, 1).compare("5") == 0){
			cout << "wu ";
		}
		if (ssum.substr(i, 1).compare("6") == 0){
			cout << "liu ";
		}
		if (ssum.substr(i, 1).compare("7") == 0){
			cout << "qi ";
		}
		if (ssum.substr(i, 1).compare("8") == 0){
			cout << "ba ";
		}
		if (ssum.substr(i, 1).compare("9") == 0){
			cout << "jiu ";
		}
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("0") == 0){
		cout << "ling";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("1") == 0){
		cout << "yi";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("2") == 0){
		cout << "er";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("3") == 0){
		cout << "san";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("4") == 0){
		cout << "si";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("5") == 0){
		cout << "wu";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("6") == 0){
		cout << "liu";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("7") == 0){
		cout << "qi";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("8") == 0){
		cout << "ba";
	}
	if (ssum.substr(ssum.size() - 1, 1).compare("9") == 0){
		cout << "jiu";
	}

	system("pause");
	return 0;
}