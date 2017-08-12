/*
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����

���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�

�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
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
	//��������PAT��������ַ�
	if (s.find_first_not_of("PAT") != -1){
		return 0;
	}
	//��PAT���е�����һ��������
	if (s.find('P') == -1 || s.find('T') == -1 || s.find('A') == -1){
		return 0;
	}
	//������ֹһ����P�����ߡ�A��
	if (s.find_first_of('P') != s.find_last_of('P') || s.find_first_of('T') != s.find_last_of('T')){
		return 0;
	}
	//P��T�������
	if (s.find_first_of('T') - s.find_first_of('P') < 2){
		return 0;
	}
	//Pǰ�ַ����봮β��ͬ�����ַ�������ͬ
	if (s.substr(0, s.find('P')).compare(s.substr(s.size() - s.find('P'), s.find('P'))) != 0){
		return 0;
	}
	//P��T���ж��A���ж���trans()��������ַ���
	if (s.find_first_of('T') - s.find_first_of('P') > 2){
		if (judge(trans(s)) == 1){
			return 1;
		}
		else{
			return 0;
		}
	}
	//P��T��ֻ��һ��A��Pǰ��T����ַ���������ͬ
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