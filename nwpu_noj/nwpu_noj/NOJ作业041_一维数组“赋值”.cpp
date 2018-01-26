#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
//int main()
//{
//	int a[100], b[100];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		b[i] = a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 1)
//		cout << b[i] << ' ';
//	}
//	cout<<'\b';
//	return 0;
//}


int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int>::iterator pd;
	for (pd = a.begin(); pd != a.end(); pd++)
	{
		//cin >> *pd;
		int temp;
		scanf_s("%d", &temp);
		//a.push_back(temp);   // 为什么不能这样写？
		*pd = temp;
	}
	b.assign(a.begin(), a.end());

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
			cout << b[i] << ' ';
	}
	//cout << '\b';          加上这句显示数据错误。。。
	
	return 0;
}

