# include <stdio.h>
# include <string.h>

int main()
{
	long a, b, c;
	char s[32];
	int d, i=0;
	scanf("%ld %ld %d", &a, &b, &d);
	c=a+b;
	while(c)
	{
		s[i++]=(char)(c%d+'0');
		c/=d;
	}
	s[i]='\0';
	if(i==0)
		printf("0");
	else
		for(i=strlen(s)-1;i>=0;i--)
			putchar(s[i]);
	
	putchar('\n');
	return 0;
}