# include <stdio.h>
# include <stdlib.h>

int main()
{
	int i,n,m=0,max;
	scanf("%d", &n);

	int *score=(int *)malloc(n*sizeof(int));
	int *k=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &k[i], &score[i]);
		if(k[i]>m)
			m=k[i];
	}

	long *sum=(long *)malloc(m*sizeof(long));
	for(i=0;i<m;i++)
		sum[i]=0;
	for(i=0;i<n;i++)
		sum[k[i]-1]+=score[i];
	max=m-1;
	m-=2;
	while(m>=0)
	{
		if(sum[max]<sum[m])
			max=m;
		m--;
	}
	printf("%d %ld\n", max+1, sum[max]);
	free(score);
	free(k);
	free(sum);
	return 0;
}