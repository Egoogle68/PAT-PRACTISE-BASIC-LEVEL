# include <stdio.h>

int judge(char a, char b)
{
	if(a=='C')
	{
		if(b=='C')
			return 0;
		else if(b=='J')
			return 1;
		else return -1;
	}
	if(a=='J')
	{
		if(b=='J')
			return 0;
		else if(b=='B')
			return 1;
		else return -1;
	}
	if(a=='B')
	{
		if(b=='B')
			return 0;
		else if(b=='C')
			return 1;
		else return -1;
	}
}

char max(int c, int j, int b)
{
	if(b>=c&&b>=j)
		return 'B';
	else if(c>b&&c>=j)
		return 'C';
	else
		return 'J';
}

int main()
{
	char c1, c2;
	int n,n1,n2,n3,nc,nj,nb,lc,lj,lb;
	n1=n2=n3=nc=nj=nb=lc=lj=lb=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf(" %c %c", &c1, &c2);
		if(judge(c1,c2)>0)
		{
			n1++;
			switch(c1)
			{
			case 'C': nc++; break;
			case 'J': nj++; break;
			case 'B': nb++; break;
			}
		}
		else if(judge(c1,c2)<0)
		{
			n3++;
			switch(c2)
			{
			case 'C': lc++; break;
			case 'J': lj++; break;
			case 'B': lb++; break;
			}
		}
		else
			n2++;
	}
	
	printf("%d %d %d\n", n1, n2, n3);
	printf("%d %d %d\n", n3, n2, n1);
	printf("%c ", max(nc,nj,nb));
	printf("%c\n", max(lc,lj,lb));

	return 0;
}