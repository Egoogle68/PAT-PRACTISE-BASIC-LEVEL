# include <stdio.h>
# include <stdlib.h>

int main()
{
	int i,n;
	int k1,k2,k3,k4,k5,flag;
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	int n4=0;
	scanf("%d", &n);
	int *a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	flag=1;
	k1=k2=k3=k4=k5=0;
	for(i=0;i<n;i++)
	{
		switch(a[i]%5)
		{
			case 0: if(a[i]%2==0)
					{k1+=a[i];
				flag1=1;}
				break;
			case 1: k2+=flag*a[i];
				flag*=-1;
				flag2=1;
				break;
			case 2: k3++;
				flag3=1;
				break;
			case 3: k4+=a[i];
				n4++;
				flag4=1;
				break;
			case 4: if(a[i]>k5)
					{k5=a[i];
				flag5=1;}
				break;
		}
	}

	if(flag1)
		printf("%d ", k1);
	else
		printf("N ");
	if(flag2)
		printf("%d ", k2);
	else
		printf("N ");
	if(flag3)
		printf("%d ", k3);
	else
		printf("N ");
	if(flag4)
		printf("%.1f ", (float)k4/n4);
	else
		printf("N ");
	if(flag5)
		printf("%d\n", k5);
	else
		printf("N\n");
	free(a);
	return 0;
}