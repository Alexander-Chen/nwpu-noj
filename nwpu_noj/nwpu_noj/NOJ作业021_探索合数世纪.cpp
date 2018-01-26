#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,k,m=0;
	cin >> n;
	for ( i = 0;; i += 100)
	{
		for (j =i+1; j < i+100; j+=2)
		{
			for ( k=3; k < sqrt(j); k+=2)                 //判断素数时注意时间复杂度
			{
				if (j%k == 0)
					break;
			}
			if (k>= sqrt(j))
				break;
		}
		if (j == i + 101) m++;                       //此处i不会取到100
		if (n==m)
		{
			break;
		}
	}
	cout << i << " " << i + 99;
	return 0;
}































//int main()
//{
//	int ce, y, m, n, a = 0;
//	scanf_s("%d", &n);
//	for (ce = 0;; ce += 100) 
//	{
//		for (y = ce + 1; y<ce + 100; y += 2) 
//		{
//			for (m = 2; m<y; m += 1) 
//			{
//				if (y%m == 0) break;
//			}
//			if (m ==y)break;
//		}
//		if (y == ce + 101) a++;
//		if (a == n) break;
//	}
//	printf("%d %d\n", ce, ce + 99);
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int ce, y, m, n, a = 0;
//	scanf("%d", &n);
//	for (ce = 0;; ce += 100) 
//	{
//		for (y = ce + 1; y<ce + 100; y += 2) 
//		{
//			for (m = 3; m<sqrt(y); m += 2) 
//			{
//				if (y%m == 0) break;
//			}
//			if (m >= sqrt(y)) break;
//		}
//		if (y == ce + 101) a++;
//		if (a == n) break;
//	}
//	printf("%d %d\n", ce, ce + 99);
//	return 0;
//}
