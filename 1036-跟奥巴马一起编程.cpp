# include <stdio.h>

int main()
{
	int i,j,n,m;
	char c;
	scanf("%d %c", &n, &c);
	m=(n+1)/2;
	for(i=0;i<n;i++)
		printf("%c", c);
	printf("\n");
	for(j=0;j<m-2;j++)
	{
		printf("%c", c);
		for(i=1;i<n-1;i++)
			printf(" ");
		printf("%c", c);
		printf("\n");
	}
	for(i=0;i<n;i++)
		printf("%c", c);
	printf("\n");
}