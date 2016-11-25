# include <stdio.h>

int main()
{
	int c[10]={0};
	int i,j;
	for(i=0;i<10;i++)
		scanf("%d", &c[i]);
	if(c[0])
	{
		j=1;
		while(c[j]==0)
			j++;
		c[j]--;
		printf("%d", j);
	}
	for(i=0;i<10;i++)
		while(c[i]--)
			printf("%d", i);
	printf("\n");
	return 0;
}