# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>

int M,N;

int cmp(const void *a, const void *b)
{
	return *(int *)b-*(int *)a;
}

int right(const int *a, int *b, int i, int j)
{
	int l=0;
	do{
		b[i*N+(++j)]=*(a+(l++));
	}while(j<N-1&&b[i*N+j+1]==0);
	return l;
}

int left(const int *a, int *b, int i, int j)
{
	int l=0;
	do{
		b[i*N+(--j)]=*(a+(l++));
	}while(j>0&&b[i*N+j-1]==0);
	return l;
}

int up(const int *a, int *b, int i, int j)
{
	int l=0;
	do{
		b[(--i)*N+j]=*(a+(l++));
	}while(i>0&&b[(i-1)*N+j]==0);
	return l;
}

int down(const int *a, int *b, int i, int j)
{
	int l=0;
	do{
		b[(++i)*N+j]=*(a+(l++));
	}while(i<M-1&&b[(i+1)*N+j]==0);
	return l;
}

int main()
{
	int t,n,i,j,k;
	scanf("%d", &n);
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(n*sizeof(int));
	memset(b,0,n*sizeof(int));
	N=(int)sqrt(n);
	while(n%N)
		N--;
	M=n/N;

	for(t=0;t<n;t++)
		scanf("%d", &a[t]);
	qsort(a,n,sizeof(int),cmp);

	i=j=0;
	t=1;
	b[0]=a[0];
	while(t<n)
	{
		if(j<N-1)
		{
			k=right(a+t,b,i,j);
			t+=k;
			j+=k;
			if(t==n)
				break;
		}
		if(i<M-1)
		{
			k=down(a+t,b,i,j);
			t+=k;
			i+=k;
			if(t==n)
				break;
		}
		if(j>0)
		{
			k=left(a+t,b,i,j);
			t+=k;
			j-=k;
			if(t==n)
				break;
		}
		if(i>0)
		{
			k=up(a+t,b,i,j);
			t+=k;
			i-=k;
		}
	}
	for(i=0;i<M;i++)
	{
		j=0;
		while(j<N-1)
			printf("%d ", b[i*N+j++]);
		printf("%d\n", b[i*N+N-1]);
	}

	free(a);
	free(b);
	return 0;
}