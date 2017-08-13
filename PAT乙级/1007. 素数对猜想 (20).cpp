/*
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻
且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
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