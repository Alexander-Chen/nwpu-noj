#include<iostream>
#include<vector>
using namespace std;
int count(int m);
int main()
 { 
	int n,sum=0;
	cin>>n;
	vector<int> salary(n);
	vector<int>::iterator pd;
	for (int i = 0; i< n; i++)
	{
		//int temp;
		scanf_s("%d", &salary[i]);//                   
		//cin >> temp;
		//salary.push_back(temp);

	};
	/*for (pd = salary.begin(); pd != salary.end(); pd++)
	{
		sum = sum + count(*pd);
	};*/
	for (int j = 0; j<n; j++)
	{

		//cout << salary[j] << endl;         此处有一个问题：如果是用Push_back输入的元素，用下标遍历就会发现元素都是0，而用迭代器遍历就不会出现这样的问题。为什么
		sum =sum+ count(salary[j]);        
		//cout << sum << endl;;
	};
	cout << sum;
    return 0;
 }

int count(int m)
{
	int temp=(m/100)+(m%100)/50+((m%100)%50)/10+ (((m % 100) % 50)%10)/5+ (((m % 100) % 50) % 5) / 2+ ((((m % 100) % 50) % 5) % 2)/1;
	return temp;
	
}

//#include<stdio.h>
//int _min(int n)
//{
//	int i = 0;
//	if (n >= 100) i = n / 100 % 10, n = n / 10 % 10 * 10 + n % 10;
//	if (n >= 50) i += 1, n -= 50;
//	if (n >= 10) i += n / 10 % 10, n %= 10;
//	if (n >= 5) i += 1, n -= 5;
//	if (n >= 2) i += n / 2, n %= 2;
//	if (n == 1) i += 1;
//	return i;
//}
//int f[100];
//int main()
//{
//	int n, i, sum;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//		scanf("%d", &f[i]);
//	for (sum = 0, i = 0; i<n; i++)
//		sum = sum + _min(f[i]);
//	printf("%d\n", sum);
//	return 0;
//}
