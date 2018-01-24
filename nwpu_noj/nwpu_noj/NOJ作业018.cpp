#include<iostream>
using namespace std;
void comp(int i, int j)
{
	if (i>j)
	{
		int m = j;
		j = i;
		i = m;

	}
}
int main()
{
	int a, b;
	int j;
	cin >> a>>b;
	comp(a, b);
	for (int i = a; i <= b;i++ )
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			cout << i<<" ";
		}
	}
	return 0;
}