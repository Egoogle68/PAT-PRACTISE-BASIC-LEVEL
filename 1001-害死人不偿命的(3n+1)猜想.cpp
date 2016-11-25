# include <stdio.h>

int test(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", test(n));
	return 0;
}

int test(int n)
{
	int i=0;
	while(n>1)
	{
		if(n%2==0)
			n=n/2;
		else
			n=(3*n+1)/2;
		i++;
	}
	return i;
}