# include <stdio.h>
# include <stdlib.h>

typedef struct node{
	float a;
	float b;
	double c;
}item;

int cmp(const void *m, const void *n)
{
	if ( ((item *)m)->c < ((item *)n)->c )
		return 1;
	else
		return -1;
}

int main()
{
	int n;
	float d;
	int i,j;
	double total=0;
	scanf("%d %f", &n, &d);
	item *m=(item *)malloc(n*sizeof(item));

	for(i=0;i<n;i++)
		scanf("%f", &m[i].a);
	for(i=0;i<n;i++)
		scanf("%f", &m[i].b);
	for(i=0;i<n;i++)
		if(m[i].a)
			m[i].c=(double)m[i].b/m[i].a;
		else
			m[i].c=0;
	qsort(m,n,sizeof(item),cmp);

	j=0;
	while(d>0&&j<n)
	{
		if(d>=m[j].a)
		{
			total+=m[j].b;
			d-=m[j].a;
			j++;
		}
		else
		{
			total+=m[j].c*d;
			break;
		}
	}
	free(m);
	printf("%.2lf\n", total);
	return 0;
}