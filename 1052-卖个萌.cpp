# include <stdio.h>
# include <string.h>

int get_symbol(char (*s)[5])
{
	int i=0,j;
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch=='[')
		{
			j=0;
			while((ch=getchar())!=']')
				s[i][j++]=ch;
			s[i++][j]='\0';
		}
	}
	return i;
}

int main()
{
	int n,t,k1,k2,k3,k4,k5;
	int l1,l2,l3;
	char at[11][5], bt[11][5], ct[11][5];
	l1=get_symbol(at);
	l2=get_symbol(bt);
	l3=get_symbol(ct);

	scanf("%d", &n);
	for(t=0;t<n;t++)
	{
		scanf("%d %d %d %d %d", &k1, &k2, &k3, &k4, &k5);
		if(k1>l1||k2>l2||k3>l3||k4>l2||k5>l1)
			//×¢Òâ\×Ö·ûÊä³öÒªĞ´'\\'
			printf("Are you kidding me? @\\/@\n");
		else if(k1<=0||k2<=0||k3<=0||k4<=0||k5<=0)
			printf("Are you kidding me? @\\/@\n");
		else
			printf("%s(%s%s%s)%s\n", at[k1-1], bt[k2-1], ct[k3-1], bt[k4-1], at[k5-1]);
	}
	return 0;
}