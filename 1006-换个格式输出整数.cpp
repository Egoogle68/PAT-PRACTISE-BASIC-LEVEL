# include <stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d", &n);
	a=n/100;
	b=n/10%10;
	c=n%10;
	while(a>0)
	{
		putchar('B');
		a--;
	}
	while(b>0)
	{
		putchar('S');
		b--;
	}
	if(c>0)
		for(int i=1;i<=c;i++)
			printf("%d", i);

	putchar('\n');
	return 0;
}