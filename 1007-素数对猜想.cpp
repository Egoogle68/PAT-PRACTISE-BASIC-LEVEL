# include <stdio.h>
# include <math.h>

int isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main()
{
	int n,i,k,count;
	scanf("%d", &n);
	k=2;
	count=0;
	for(i=3;i<=n;i++)
		if(isprime(i))
		{
			if(i-k==2)
				count++;
			k=i;
		}
	printf("%d\n", count);
	return 0;
}