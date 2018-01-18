#include<iostream>
#include<cstdio>
#include <cstdlib>
using namespace std;


/*int main()
{
	int year, month, day;
	string str;
	cin >> str;

	year = atoi((str.substr(0, 4)).c_str());
	month = atoi((str.substr(5, 7)).c_str());
	day = atoi((str.substr(8, 10)).c_str());

	cout << year << month << day;
	return 0;
}*/
/*int days(int n, int y, int r);
int main()
{
	int y, m, d;
	cout << "请输入 年 月 日 ：";
	scanf_s("%d-%d-%d", &y, &m, &d);
	// cin >> y >> c >> m >> c >> d;
	cout<<days(y,m,d);
	return 0;
}
int days(int n, int y, int r)
{
	int feb;
	if ((n % 4 == 0) && (n % 100 == 0) || (n % 400 == 0))
		feb= 29;
	else feb= 28;
	switch (y)
	{
	case 1:return r;
	case 2:return 31 + r;
	case 3:return 31 + feb + 31;
	case 4:return 31 + feb+31 + r;
	case 5:return 31 + feb + 31 + 30 + r;
	case 6:return 31 + feb+31 + 30 + 31 + r;
	case 7:return 31 + feb + 31 + 30 + 31 + 30+r;
	case 8:return 31 + feb + 31 + 30 + 31 + 30 + 31+r;
	case 9:return 31 + feb + 31 + 30 + 31 + 30 + 31 + 31+r;
	case 10:return 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 +30+ r;
	case 11:return 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30+r;
	case 12:return 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30 + 30+r;
	}
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int y, m, d;
	scanf_s("%d-%d-%d", &y, &m, &d);
	switch (m)
	{
	case 12:d = 30 + d;
	case 11:d = 31 + d;
	case 10:d = 30 + d;
	case 9:d = 31 + d;
	case 8:d = 31 + d;
	case 7:d = 30 + d;
	case 6:d = 31 + d;
	case 5:d = 30 + d;
	case 4:d = 31 + d;
	case 3:d = 28 + d;
	case 2:d = 31 + d;
	default:d = d;
	}
	printf("%d", d);
	return 0;
}
