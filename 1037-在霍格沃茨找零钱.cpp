# include <stdio.h>

int cmp(long g1, long g2, int s1, int s2, int k1, int k2)
{
	if(g1>g2)
		return 1;
	else if(g1<g2)
		return 0;
	else
	{
		if(s1>s2)
			return 1;
		else if(s1<s2)
			return 0;
		else
		{
			if(k1>=k2)
				return 1;
			else
				return 0;
		}
	}
}

void calculate(long g1, long g2, int s1, int s2, int k1, int k2)
{
	long g;
	int s,k,flag=0;
	k=(k1+29-k2)%29;
	if(k1-k2<0)
		flag=1;
	s=(s1+17-s2-flag)%17;
	if(s1-s2-flag<0)
		flag=1;
	else
		flag=0;
	g=g1-g2-flag;
	printf("%ld.%d.%d\n", g, s, k);
}

int main()
{
	long g1,g2;
	int s1,s2,k1,k2;
	scanf("%ld.%d.%d", &g2, &s2, &k2);
	scanf("%ld.%d.%d", &g1, &s1, &k1);
	if(cmp(g1,g2,s1,s2,k1,k2))
		calculate(g1,g2,s1,s2,k1,k2);
	else
	{
		printf("-");
		calculate(g2,g1,s2,s1,k2,k1);
	}
	return 0;
}