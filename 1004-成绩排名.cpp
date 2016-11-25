# include <stdio.h>
# include <stdlib.h>

typedef struct node{
	//不超过10个字符需要考虑'\0'
	char name[11];
	char num[11];
	int score;
} info;

int main()
{
	int i,n,min,max,imax,imin;
	scanf("%d", &n);
	info *stu=(info *)malloc(n*sizeof(info));
	info *temp=stu;
	for(i=1;i<=n;i++)
	{
		scanf("%s %s %d", temp->name, temp->num, &temp->score);
		temp++;
	}
	max=0;
	min=100;
	imax=imin=0;
	for(i=0;i<n;i++)
	{
		if((stu+i)->score>=max)
		{
			imax=i;
			max=(stu+i)->score;
		}
		if((stu+i)->score<=min)
		{
			imin=i;
			min=(stu+i)->score;
		}
	}
	printf("%s %s\n", (stu+imax)->name, (stu+imax)->num);
	printf("%s %s\n", (stu+imin)->name, (stu+imin)->num);
	free(stu);
	return 0;
}