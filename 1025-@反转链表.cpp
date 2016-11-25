# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct item{
	char num1[6];
	char num2[6];
	int n;
}node;

int main()
{
	char t[6];
	int i,j,n,k,s,x;
	int a,b;
	node temp;
	scanf("%s %d %d", t, &n, &k);
	node *list=(node *)malloc(n*sizeof(node));
	for(i=0;i<n;i++)
		scanf("%s %d %s", list[i].num1, &list[i].n, list[i].num2);
	//坑-不是所有输入都一定在链表中
	x=0;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(strcmp(t,list[j].num1)==0)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
				strcpy(t,list[i].num2);
				x++;
				break;
			}		
	s=x/k;
	b=0;
	while(b<s)
	{
		for(a=0;2*a<=k-1;a++)
		{
			temp=list[b*k+a];
			list[b*k+a]=list[b*k-a+k-1];
			list[b*k-a+k-1]=temp;
		}
		b++;
	}
			
	for(i=0;i<x-1;i++)
		strcpy(list[i].num2, list[i+1].num1);
	strcpy(list[x-1].num2,"-1");

	for(i=0;i<x;i++)
		printf("%s %d %s\n", list[i].num1, list[i].n, list[i].num2);

	free(list);
	return 0;
}