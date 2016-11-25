# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

int main()
{
	char a[60],b[100001];
	int i,j;
	int la,lb;
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	if(la==0)
	{
		printf("%s\n", b);
		exit(0);
	}
	for(i=0;i<la;i++)
		a[i]=tolower(a[i]);
	for(i=0;i<la;i++)
		if(a[i]=='+')
			break;	
	if(i<la)
	{
		for(j=0;j<lb;j++)
		{
			if(isupper(b[j]))
				continue;
			else
			{
				for(i=0;i<la;i++)
					if(b[j]==a[i])
						break;
				if(i==la)
					printf("%c", b[j]);
			}
		}
	}
	else
	{
		for(j=0;j<lb;j++)
		{
			for(i=0;i<la;i++)
				if(tolower(b[j])==a[i])
					break;
			if(i==la)
				printf("%c", b[j]);
		}
	}
	printf("\n");
	return 0;
}