# include <stdio.h>

int main()
{
	int count[101]={0};
	int i,n,k;
	int s,t;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &s);
		count[s]++;
	}
	scanf("%d", &k);
	for(i=0;i<k-1;i++)
	{
		scanf("%d", &t);
		printf("%d ", count[t]);
	}
	scanf("%d", &t);
	printf("%d\n", count[t]);
	return 0;
}