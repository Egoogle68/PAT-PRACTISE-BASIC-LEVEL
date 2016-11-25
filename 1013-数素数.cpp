# include <stdio.h>
# include <math.h>

int isprime(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main()
{
	int i, m, n, flag=0, k=0;
	scanf("%d %d", &m, &n);
	i=2;
	while(k<n)
	{
		if(isprime(i))
		{
			k++;
			if(k>=m)
			{
				if(flag)
					printf(" ");
				else
					flag=1;
				if((k-m+1)%10==0)
				{
					printf("%d\n", i);
					flag=0;
				}
				else
					printf("%d", i);
			}
		}
		i++;
	}
	if((k-m+1)%10)
		printf("\n");
	return 0;
}