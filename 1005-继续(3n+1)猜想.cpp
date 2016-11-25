# include <stdio.h>
# include <stdlib.h>

int num[101];
int mark[101];
int N;

int cmp(const void *a, const void *b)
{
	return *(int*)b-*(int*)a;
}

void check(int n)
{
	while(n>1)
	{
		if(n%2)
			n=(3*n+1)/2;
		else
			n/=2;
		for(int i=0;i<N;i++)
			if(n==num[i])
			{
				mark[i]=0;
				break;
			}
	}
}

int main()
{
	int result[101];
	int i,k;
	
	scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		scanf("%d", &num[i]);
		mark[i]=1;
	}
	qsort(num,i,sizeof(int),cmp);
	
	for(i=N-1;i>=0;i--)
		if(num[i]>1)
			check(num[i]);

	k=0;
	for(i=0;i<N;i++)
		if(mark[i])
			result[k++]=num[i];

	for(int j=0;j<k-1;j++)
		printf("%d ", result[j]);
	printf("%d\n", result[k-1]);

	return 0;
}