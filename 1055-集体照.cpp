# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct node{
	char name[9];
	int h;
}info;

int cmp(const void *a, const void *b)
{
	info *aa=(info *)a;
	info *bb=(info *)b;
	if(aa->h > bb->h)
		return -1;
	else if(aa->h < bb->h)
		return 1;
	else
		return strcmp(aa->name, bb->name);
}

int main()
{
	int i,n,k,t,m,p,q=0;
	scanf("%d %d", &n, &k);
	t=n/k;
	m=n-t*k+t;
	info *s=(info *)malloc(n*sizeof(info));
	for(i=0;i<n;i++)
		scanf("%s %d", s[i].name, &s[i].h);
	qsort(s,n,sizeof(info),cmp);

	p=m/2*2;
	while(p>=2)
	{
		printf("%s ", s[p-1].name);
		p-=2;
	}
	p=1;
	while(p<(m+1)/2*2-1)
	{
		printf("%s ", s[p-1].name);
		p+=2;
	}
	printf("%s\n", s[p-1].name);
	
	q+=m;
	k--;
	while(k>0)
	{
		p=t/2*2;
		while(p>=2)
		{
			printf("%s ", s[q+p-1].name);
			p-=2;
		}
		p=1;
		while(p<(t+1)/2*2-1)
		{
			printf("%s ", s[q+p-1].name);
			p+=2;
		}
		printf("%s\n", s[q+p-1].name);
		k--;
		q+=t;
	}
	free(s);
	return 0;
}