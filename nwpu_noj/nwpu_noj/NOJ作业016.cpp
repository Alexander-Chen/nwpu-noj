#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,j;
	double a, b, c, v,sum=0;
	cin >> n;
	for (j = 1; j <= n;j++)
	{
		a = pow((-1), (j - 1))*pow(2, j);
		b = pow(2, j) + pow((-1), j);
		c = pow(2, (j + 1)) + pow((-1), (j + 1));
		v=a / (b*c);
		sum = sum + v;

	}
	cout << fixed << setprecision(6) << sum;
	//cout << setiosflags(ios::fixed) << setprecision(6) << sum;
	return 0;
}