# include <stdio.h>
# include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(long *)a-*(long *)b;
}

int main()
{
	int i,n,count=0;
	long max;
	scanf("%d", &n);
	long *data=(long *)malloc(n*sizeof(long));
	long *sort=(long *)malloc(n*sizeof(long));
	long *s=(long *)malloc(n*sizeof(long));
	for(i=0;i<n;i++)
	{
		scanf("%ld", &data[i]);
		sort[i]=data[i];
	}
	qsort(sort,n,sizeof(long),cmp);
	max=sort[0]-1;
	for(i=0;i<n;i++)
	{
		if(data[i]>max)
			max=data[i];
		if(data[i]==sort[i]&&data[i]==max)
		{
			s[count]=data[i];
			count++;
		}
	}
	printf("%d\n", count);
	if(count)
	{
		printf("%ld", s[0]);
		for(i=1;i<count;i++)
			printf(" %ld", s[i]);
	}
	free(data);
	free(sort);
	free(s);
	printf("\n");
	return 0;
}
