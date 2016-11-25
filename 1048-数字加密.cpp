# include <stdio.h>
# include <string.h>

int main()
{
	int i,j,k,x,flag=0;
	char a[101],b[101],c[101];
	char t[3]={'J', 'Q', 'K'};
	scanf("%s %s", a, b);
	i=strlen(a)-1;
	j=strlen(b)-1;
	x=i>j?i:j;
	c[x+1]='\0';
	while(j>=0&&i>=0)
	{
		if(flag)
		{
			k=b[j]-a[i];
			if(k<0)
				k+=10;
			c[x]=k+'0';
			flag=0;
		}
		else
		{
			k=(a[i]-'0'+b[j]-'0')%13;
			if(k<10)
				c[x]=k+'0';
			else
				c[x]=t[k-10];
			flag=1;
		}
		x--;
		i--;
		j--;
	}
	while(j>=0)
		c[x--]=b[j--];
	while(i>=0)
	{
		if(flag)
		{
			if(a[i]-'0')
				c[x]=10-a[i]+'0'+'0';
			else
				c[x]='0';
			flag=0;
		}
		else
		{
			c[x]=a[i];
			flag=1;
		}
		x--;
		i--;
	}
	printf("%s\n", c);
	return 0;
}