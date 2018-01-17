#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

/*int main()
{
	int num, a[10], i, k = 0;
	printf("请输入一个正整数：");
	scanf_s("%d", &num);
	// 分离正整数的每一位，并存放到数组a中
	while (num>0)
	{
		a[k++] = num % 10;  // 将正整数的最低位保存到数组a中
		num /= 10;        // 将正整数的次低位变为最低位
	}
	// 输出数组的每个元素，即实现逆序输出正整数
	for (i = 0; i<k; i++)
		printf("%d", a[i]);
	return 0;
}
*/
/*
int main() {
	int n= 0;
	scanf_s("%d", &n);
	while (n)
	{
		printf("%d", n % 10);
		n /= 10;
	}
	return 0;
}
*/


/*
bool is_lucky_num(string s)
{
	string s_rev = s;
	reverse(s_rev.begin(), s_rev.end());
	if (s_rev == s)
		return true;
	return false;
}

int main()
{
	string s;
	cin >> s;
	if (is_lucky_num(s))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
*/
int main()
{
	int N, M, n;
	scanf_s("%d", &N);
	M = 0;
	n = N;
	while (n > 0) {
		M = M * 10 + n % 10;
		n /= 10;
	}
	if (N == M)
		printf("yes\n");
	else printf("no\n");
	return 0;
}