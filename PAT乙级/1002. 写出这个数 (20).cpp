//����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
//
//�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��
//
//�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
//
//����������
//1234567890987654321123456789
//���������
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