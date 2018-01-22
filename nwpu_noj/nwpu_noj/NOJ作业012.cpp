#include<iostream>

/*
int main()
{
	using namespace std;
	int cnt,i;
	int a[300];
	for(i=500;i++;i<=800)
		if (((i%2)!=0)&&((i%3)!=0)&&((i%5)!=0)&&((i%7)!=0) && ((i % 11) != 0) && ((i % 13) != 0)&&((i % 17) != 0) && ((i % 19) != 0))
			a[++]=i
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, n, m, d;
	a = 799;
	d = 1;
	m = 0;
	n = 0;
	while (a>500 && a<800) {
		c = 0;
		b = a - 1;
		while (b>1) {
			if (a%b == 0) c = c + 1;
			b = b - 1;
		};
		if (c == 0) {
			n = 1 + n;
			m = m + d * a;
			d = -1 * d;
		};
		a = a - 1;
	}
	printf("%d %d", n, m);
	return 0;
}
