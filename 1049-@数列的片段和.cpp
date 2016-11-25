# include <stdio.h>
# include <stdlib.h>

//注意精度必须用double 寻找规律
int main()
{
	int i,n;
	double sum=0;
	scanf("%d", &n);
	double *a=(double *)malloc(n*sizeof(double));
	for(i=0;i<n;i++)
		scanf("%lf", &a[i]);
	for(i=0;i<n;i++)
		sum+=a[i]*(double)(i+1)*(double)(n-i);
	printf("%.2lf\n", sum);
	free(a);
	return 0;
}