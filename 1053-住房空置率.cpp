# include <stdio.h>
# include <stdlib.h>

int main()
{
	int i,j,n,d,t;
	double e;
	int k,n1,n2;
	n1=n2=0;
	scanf("%d %lf %d", &n, &e, &d);
	for(i=0;i<n;i++)
	{
		t=0;
		scanf("%d", &k);
		double *s=(double *)malloc(k*sizeof(double));
		for(j=0;j<k;j++)
		{
			scanf("%lf", s+j);
			if(s[j]<e)
			{
				t++;
				if(2*t>k)
				{
					if(k>d)
						n2++;
					else
						n1++;
					while(++j<k)
						scanf("%lf", s+j);
					break;
				}
			}
		}
		free(s);
	}
	printf("%.1lf%% %.1lf%%\n", (double)n1*100/n, (double)n2*100/n);
	return 0;
}