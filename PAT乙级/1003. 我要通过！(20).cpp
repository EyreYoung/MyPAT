/*
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
*/
#include<iostream>
#include<string>
using namespace std;

string trans(string s){
	s.erase(s.find('P') + 1, 1);
	s.erase(s.size() - s.find('P'), s.find('P'));
	return s;
}

int judge(string s){
	//包含除“PAT”以外的字符
	if (s.find_first_not_of("PAT") != -1){
		return 0;
	}
	//“PAT”中的任意一个不存在
	if (s.find('P') == -1 || s.find('T') == -1 || s.find('A') == -1){
		return 0;
	}
	//包含不止一个“P”或者“A”
	if (s.find_first_of('P') != s.find_last_of('P') || s.find_first_of('T') != s.find_last_of('T')){
		return 0;
	}
	//P在T后或相连
	if (s.find_first_of('T') - s.find_first_of('P') < 2){
		return 0;
	}
	//P前字符串与串尾相同个数字符串不相同
	if (s.substr(0, s.find('P')).compare(s.substr(s.size() - s.find('P'), s.find('P'))) != 0){
		return 0;
	}
	//P和T间有多个A则判断用trans()缩减后的字符串
	if (s.find_first_of('T') - s.find_first_of('P') > 2){
		if (judge(trans(s)) == 1){
			return 1;
		}
		else{
			return 0;
		}
	}
	//P和T间只有一个A但P前和T后的字符串个数不同
	if (s.find_first_of('T') - s.find_first_of('P') == 2 && (s.find('P') * 2 + 3) != s.size()){
		return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	string s[100];
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	for (int i = 0; i < n-1; i++){
		if (judge(s[i]) == 1){
			cout << "YES" << endl;
		}
 		if (judge(s[i]) == 0){
			cout << "NO" << endl;
		}
	}
	if (judge(s[n-1]) == 1){
		cout << "YES";
	}
	if (judge(s[n-1]) == 0){
		cout << "NO";
	}
	system("pause");
  	return 0;
}