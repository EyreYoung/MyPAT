/*
�����Ƕ��� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż�����������Բ��롱��Ϊ����������������
�Ҳ�Ϊ2����������

�ָ�������������N (< 105)������㲻����N���������������Եĸ�����

�����ʽ��ÿ�������������1����������������������N��

�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����

����������
20
���������
4
*/

#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	if (a%i == 0) 
		return false;
	return true;
}

int main(){
	int N;
	while (cin >> N){
		if (N == 1){
			cout << 0;
		}
		else{
			int k = 0;
			for (int i = 2; i <= N - 2; i++){
				if (isprime(i) && isprime(i + 2)){
					k++;
				}
			}
			cout << k;
		}
	}
	return 0;
}