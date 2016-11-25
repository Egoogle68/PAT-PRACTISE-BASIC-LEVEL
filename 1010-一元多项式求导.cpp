# include <stdio.h>

int main()
{
	int a,b,flag;
	flag=0;
	while(scanf("%d %d", &a, &b)!=NULL)
	{
		if(a*b)
		{
			if(flag)
				printf(" ");
			else
				flag=1;
			printf("%d %d", a*b, b-1);
		}
		if(getchar()=='\n')
			break;
	}
	if(!flag)
		printf("0 0");
	printf("\n");
	return 0;
}