# include <stdio.h>

int main()
{
	char s[10000];
	int i=1;
	int n=0;
	char ch;
	scanf("%s", s);
	if(s[0]=='-')
		printf("-");
	while(s[i]!='E')
		i++;

	ch=s[i+1];
	i+=2;
	while(s[i]!='\0')
		n=n*10+s[i++]-'0';
	if(ch=='+')
	{
		i=3;
		if(s[1])
			printf("%c", s[1]);
		else
			while(s[i]==0)
				i++;
		while(n&&s[i]!='E')
		{
			printf("%c", s[i++]);
			n--;
		}
		if(s[i]=='E')
			while(n--)
				printf("0");
		else
		{
			printf(".");
			while(s[i]!='E')
				printf("%c", s[i++]);
		}
	}
	else
	{
		if(n)
		{
			printf("0.");
			while(--n)
				printf("0");
			printf("%c", s[1]);
			i=3;
			while(s[i]!='E')
				printf("%c", s[i++]);
		}
	}
	printf("\n");
	return 0;
}