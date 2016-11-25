# include <stdio.h>
# include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)b-*(int *)a;
}

int main()
{
	int a,b,c;
	int bs[4],cs[4];
	scanf("%d", &a);
	if(a%1111==0)
		printf("%04d - %04d = 0000\n", a, a);
	else
		do
		{
			for(int i=0;i<4;i++)
			{
				bs[i]=cs[i]=a%10;
				a/=10;
			}
			qsort(bs,4,sizeof(int),cmp);
			b=bs[0]*1000+bs[1]*100+bs[2]*10+bs[3];
			c=bs[3]*1000+bs[2]*100+bs[1]*10+bs[0];
			a=b-c;
			printf("%04d - %04d = %04d\n", b, c, a);
		}while(a!=6174);
	return 0;
}