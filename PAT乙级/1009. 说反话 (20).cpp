/*
����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ�
���е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�

����������
Hello World Here I Come
���������
Come I Here World Hello
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	//������д��s
	getline(cin, s);
	while (1){
		//û�пո���ֱ������ַ����˳�
		if (s.find(' ') > s.size()){
			cout << s;
			break;
		}
		//������һ���ո�֮����ַ���
		cout << s.substr(s.find_last_of(' ') + 1, s.size() - 1) << " ";
		//ȥ�����һ���ո����Ժ���ַ���
		s = s.substr(0, s.find_last_of(' '));
	}

	system("pause");
	return 0;
}