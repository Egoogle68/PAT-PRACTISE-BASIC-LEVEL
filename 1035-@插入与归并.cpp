# include <stdio.h>
# include <stdlib.h>

int bingo(int *a, const int *b, int n)
{
	int i=0;
	while(i<n)
	{
		if(a[i]!=b[i])
			return 0;
		i++;
	}
	return 1;
}

int cmp(const void *a, const void *b)
{
	return *(int *)a-*(int *)b;
}

void Insertion_Sort(int *a, int *b, int n)
{
	int flag=0;
	for(int i=2;i<=n;i++)
	{
		qsort(a,i,sizeof(int),cmp);
		if(flag)
		{
			for(int t=0;t<n-1;t++)
				printf("%d ", a[t]);
			printf("%d\n", a[n-1]);
			return;
		}
		if(bingo(a,b,n))
		{
			flag=1;
			printf("Insertion Sort\n");
		}
	}
}

void Merge_Sort(int *a, int *b, int n)
{
	int len,i,flag=0;
	for(len=2;len<=n;len*=2)
	{
		for(i=0;(i+1)*len<=n;i++)
			qsort(a+i*len,len,sizeof(int),cmp);
		qsort(a+i*len,n-i*len,sizeof(int),cmp);
		if(flag)
		{
			for(int t=0;t<n-1;t++)
				printf("%d ", a[t]);
			printf("%d\n", a[n-1]);
			return;
		}
		if(bingo(a,b,n))
		{
			flag=1;
			printf("Merge Sort\n");
		}
	}
}

int main()
{
	int i,n;
	scanf("%d", &n);
	int *a1=(int *)malloc(n*sizeof(int));
	int *a2=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d", &a1[i]);
		a2[i]=a1[i];
	}
	for(i=0;i<n;i++)
		scanf("%d", &b[i]);

	Insertion_Sort(a1,b,n);
	Merge_Sort(a2,b,n);

	free(a1);
	free(a2);
	free(b);

	return 0;
}