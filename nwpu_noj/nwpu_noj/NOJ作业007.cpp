#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
double fee(double l)
{
	if (l <= 2)
		return 7;
	else if ((l > 2 )& (l <= 15))
		l = ceil(l);
	return (7 + (l - 2)*1.5);
	  if (l > 15)
		l= ceil(l);
		return(7 + 13 * 1.5 + (l - 15)*2.1);

}
int main()
{
	double km;
	cin >> km;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<fee(km);
	return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double a, b, c;
	scanf_s("%lf", &a);
	if (a>2)
	{
		if (a>15)
		{
			c = ceil(a - 15);
			b = 26.5 + 2.1*c;
			printf("%.6lf", b);
		}
		else
		{
			c = ceil(a - 2);
			b = 7 + 1.5*c;
			printf("%.6lf", b);
		}
	}
	else printf("7.000000");
	return 0;
}
*/