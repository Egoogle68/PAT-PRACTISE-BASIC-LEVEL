# include <stdio.h>

int main()
{
	int n,k,i,j,l,m;
	char c;
	scanf("%d %c", &n, &c);
	k=1;
	while(2*k*k-1<=n)
		k++;
	k--;
	l=n+1-2*k*k;
	for(m=k;m>=1;m--)
	{
		for(i=k*2-1;i>2*m-1;i-=2)
			printf(" ");
		for(j=2*m-1;j>=1;j--)
			printf("%c", c);
		printf("\n");
	}
	if(k>1)
		for(m=2;m<=k;m++)
		{
			for(i=k*2-1;i>2*m-1;i-=2)
				printf(" ");
			for(j=2*m-1;j>=1;j--)
				printf("%c", c);
			printf("\n");
		}
	printf("%d\n", l);
	return 0;
}