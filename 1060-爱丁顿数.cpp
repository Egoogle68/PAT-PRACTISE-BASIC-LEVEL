# include<stdio.h>
# include<stdlib.h>

int comp(const void*a,const void*b)
{
    return *(int *)b-*(int *)a;
}

int main()
{
	int n,i;
	scanf("%d", &n);
	int *mi=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d", &mi[i]);
	qsort(mi,n,sizeof(int),comp);
	for(i=0;i<n;i++)
		if(mi[i]<=i+1)
			break;
	printf("%d\n", i);
	return 0;
}