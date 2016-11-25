# include <stdio.h>
# include <stdlib.h>

int cmp(int *a, int *b)
{
	if(a[0]>b[0])
		return 1;
	else if(a[0]<b[0])
		return -1;
	else
	{
		if(a[1]>b[1])
			return 1;
		else if(a[1]<b[1])
			return -1;
		else
		{
			if(a[2]>b[2])
				return 1;
			else if(a[2]<b[2])
				return -1;
		}
	}
	return 0;
}

int main()
{
	int i,n,count=0;
	int min, max;
	int temp1[3]={2014,9,6};
	int temp2[3]={1814,9,6};
	scanf("%d", &n);
	int (*p)[3]=(int (*)[3])malloc(n*sizeof(int[3]));
	char (*s)[6]=(char (*)[6])malloc(n*sizeof(char[6]));
	for(i=0;i<n;i++)
		scanf("%s %4d/%2d/%2d", s[i], &p[i][0], &p[i][1], &p[i][2]);
	for(i=0;i<n;i++)
		if(cmp(p[i],temp1)<=0&&cmp(p[i],temp2)>=0)
		{
			min=max=i;
			count++;
			break;
		}
	i++;
	while(i<n)
	{
		if(cmp(p[i],temp1)<=0&&cmp(p[i],temp2)>=0)
		{	
			count++;
			if(cmp(p[i],p[min])>0)
				min=i;
			else if(cmp(p[i],p[max])<0)
				max=i;
		}
		i++;
	}
	if(count==0)
		printf("0");
	else
		printf("%d %s %s\n", count, s[max], s[min]);
	free(p);
	free(s);
	return 0;
}