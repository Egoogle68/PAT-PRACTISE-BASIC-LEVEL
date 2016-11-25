# include <stdio.h>

int main()
{
	int i,n;
	int k,score,max;
	int s[1000]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d-%*d %d", &k, &score);
		s[k-1]+=score;
	}
	max=s[0];
	k=1;
	for(i=1;i<1000;i++)
		if(s[i]>max)
		{
			max=s[i];
			k=i+1;
		}
	printf("%d %d\n", k, max);
	return 0;
}