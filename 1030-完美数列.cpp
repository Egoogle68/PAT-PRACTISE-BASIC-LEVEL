# include <stdio.h>
# include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(long *)a-*(long *)b;
}

int main()
{
	int i,j,n,max;
	long p;
	double temp;
	scanf("%d %ld", &n, &p);
	long *a=(long *)malloc(n*sizeof(long));
	for(i=0;i<n;i++)
		scanf("%ld", a+i);
	qsort(a,n,sizeof(long),cmp);
	max=0;
	j=n-1;
	while((double)a[0]*p<a[j])
		j--;
	max=j+1;

	i=1;
	while((temp=(double)a[i]*p)>=a[i+1]&&i<n-1)
	{
		while(temp>=a[j]&&j<n)
			j++;
		if(j-i>max)
			max=j-i;
		i++;
	}
	free(a);

	printf("%d\n", max);
	return 0;
}