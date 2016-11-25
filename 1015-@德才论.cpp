# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct node{
	char num[9];
	int mor;
	int abi;
	int sum;
}stu;

int cmp(const void *x, const void *y)
{
	stu *a=(stu *)x;
	stu *b=(stu *)y;
    if(a->sum!=b->sum)
        return b->sum - a->sum;
    else
	{
        if(a->mor!=b->mor)
            return b->mor - a->mor;
        else
            if(strcmp(a->num, b->num)<0)
				return -1;
            else
				return 1;
    }
}

void show(stu *s, int n)
{
	for(int i=0;i<n;i++)
		printf("%s %d %d\n", (s+i)->num, (s+i)->mor, (s+i)->abi);
}

int main()
{
	int i;
	int n,l,h,m;
	int n1,n2,n3,n4;
	n1=n2=n3=n4=0;
	stu *s1=(stu *)malloc(100001*sizeof(stu));
	stu *s2=(stu *)malloc(100001*sizeof(stu));
	stu *s3=(stu *)malloc(100001*sizeof(stu));
	stu *s4=(stu *)malloc(100001*sizeof(stu));
	stu *temp=(stu *)malloc(sizeof(stu));

	scanf("%d %d %d", &n, &l, &h);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d", temp->num, &temp->mor, &temp->abi);
		temp->sum=temp->mor+temp->abi;
		if(temp->mor < l || temp->abi < l)
			continue;
		else
		{
			if(temp->mor >= h && temp->abi >= h)
			{
				s1[n1]=*temp;
				n1++;
			}
			else if(temp->mor >= h)
			{
				s2[n2]=*temp;
				n2++;
			}
			else if(temp->mor >= temp->abi)
			{
				s3[n3]=*temp;
				n3++;
			}
			else
			{
				s4[n4]=*temp;
				n4++;
			}
		}
	}
	free(temp);
	
	qsort(s1,n1,sizeof(stu),cmp);
	qsort(s2,n2,sizeof(stu),cmp);
	qsort(s3,n3,sizeof(stu),cmp);
	qsort(s4,n4,sizeof(stu),cmp);
	
	m=n1+n2+n3+n4;
	printf("%d\n", m);
	show(s1, n1);
	show(s2, n2);
	show(s3, n3);
	show(s4, n4);
	
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	
	return 0;
}