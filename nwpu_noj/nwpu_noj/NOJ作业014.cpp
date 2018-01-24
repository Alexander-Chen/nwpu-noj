/*多项式的猜想*/
#include<iostream>
using namespace std;
/*int main()
{
	int t, A1 = 1, A2 = 1;
	int n = 2, S = 0;
	while (S < 100)
	{
		
		t = A1;
		A1 = A2;
		A2 = t + 2 * A1;
		S = 2 + A2;
		n++;
	}
	cout << (n - 1) << endl;

	return 0;
}
*/
void sum(int m)
{
	int n = 2, S = 2;
	int t, A1 = 1, A2 = 1;
	while (S < m)
	{
		
		t = A1;
		A1 = A2;
		A2 = t + 2 * A1;
		S = S + A2;
		n++;
	}
	cout << (n - 1) << endl;
}
int main()
{
	sum(100);
	sum(1000);
	sum(10000);
}
	 /*
	n = 2, S = 0;
	
	while (S < 1000)
	{
		int  t, A1 = 1, A2 = 1;
		t = A1;
		A1 = A2;
		A2 = t + 2 * A1;
		S = 2 + A2;
		n++;
	}
	//cout << (n - 1) << endl;
	printf("%d\n", n - 1);
	 n = 2, S = 0;
	while (S < 10000)
	{
		int t, A1 = 1, A2 = 1;
		t = A1;
		A1 = A2;
		A2 = t + 2 * A1;
		S = 2 + A2;
		n++;
	}
	cout << (n - 1) << endl;


	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
	printf("6\n9\n11\n");
	return 0;
}
*/

