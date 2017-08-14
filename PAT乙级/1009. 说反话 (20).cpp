/*
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，
其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	//将整行写入s
	getline(cin, s);
	while (1){
		//没有空格则直接输出字符串退出
		if (s.find(' ') > s.size()){
			cout << s;
			break;
		}
		//输出最后一个空格之后的字符串
		cout << s.substr(s.find_last_of(' ') + 1, s.size() - 1) << " ";
		//去掉最后一个空格及其以后的字符串
		s = s.substr(0, s.find_last_of(' '));
	}

	system("pause");
	return 0;
}