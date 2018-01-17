#include<iostream>
using namespace std;
int lar(int l, int m, int n)
{
	if (1 > m)
	{
		if (l > n)
		{
			return l;
		}
		else 
		{
			return n;
		} 

	}
	else
	{
		if (m > n)
		{
			return m;
		}
		else return n;
	}
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout<<lar(a, b, c);
	return 0;
}