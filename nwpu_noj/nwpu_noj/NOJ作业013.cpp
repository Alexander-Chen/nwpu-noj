/*T013 奇特的分数队列*/
#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
	int c = 1;
	double a, b, t, s;
	a = 2; b = 1;
	s = 2;
	//cout << s << endl;;
	while (c < 20)                   //c为循环次数
	{
		t = a;
		a = a + b;
		b = t;
		
		s = s + a / b;
		//cout << a <<endl<< b<<endl;
		c++;
		
	}
	//printf("%.6lf\n", s);
	cout << fixed << setprecision(6) << s << endl;
	//cout << setiosflags(ios::fixed) << setprecision(6) << s;
	return 0;
}