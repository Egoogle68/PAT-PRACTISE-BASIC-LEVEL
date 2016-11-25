# include <stdio.h>

void reverse(int *a, int c, int d)
{
	int t;
	for(;c<d;c++,d--)
	{
		t=a[c];
		a[c]=a[d];
		a[d]=t;
	}
}

int main()
{
	int i,n,m;
	int a[101];
	scanf("%d %d", &n, &m);
	m=m%n;
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	//***三翻转得移动***
	reverse(a,0,n-m-1);
	reverse(a,n-m,n-1);
	reverse(a,0,n-1);
	for(i=0;i<n-1;i++)
		printf("%d ", a[i]);
	printf("%d\n", a[n-1]);
	return 0;
}