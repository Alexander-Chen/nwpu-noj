#include<iostream>
using namespace std;
int main()
{
	int a,m;
	cin >> a;
	m = a * (a - 1) + 1;
	cout<<a<<"*"<<a<<"*"<<a<<"="<<a*a*a<<"=";
	for (int i = 1; i <= a; i++)
	{
		cout << m << "+";
		m = m + 2;
	}
	cout << "\b \n";
	//printf("\b ");

	return 0;
}