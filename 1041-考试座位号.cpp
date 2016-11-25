# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct info{
	char num[15];
	int t;
}stu;

int main()
{
	int i,n,k;
	scanf("%d", &n);
	char temp[15];
	int t1,t2,t3;
	//注意1到n 下标0到n-1
	stu *s=(stu *)malloc(n*sizeof(stu));
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d", temp, &t1, &t2);
		strcpy(s[t1-1].num,temp);
		s[t1-1].t=t2;
	}
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		scanf("%d", &t3);
		printf("%s %d\n", s[t3-1].num, s[t3-1].t);
	}
	free(s);
	return 0;
}