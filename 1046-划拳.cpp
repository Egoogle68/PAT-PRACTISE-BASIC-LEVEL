# include <stdio.h>

int main()
{
	int i,n;
	int a,b,c,d;
	int c1=0, c2=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(b==d)
			continue;
		else if(a+c==b)
			c1++;
		else if(a+c==d)
			c2++;
	}
	printf("%d %d\n", c2, c1);
	return 0;
}