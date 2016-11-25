# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int judge(char *str);

int main()
{
	int i,j,n;
	int cp, ca, ct;
	int np, nt;
	char str[100];
	scanf("%d", &n);
	getchar();
	for(j=1;j<=n;j++)
	{
		cp=ca=ct=0;
		gets(str);
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='A')
				ca++;
			else if(str[i]=='P')
			{
				cp++;
				np=i;
			}
			else if(str[i]=='T')
			{
				ct++;
				nt=i;
			}
		}
		if(cp==1&&ct==1&&ca&&nt-np>1&&np*(nt-np-1)==(i-nt-1)&&ca+cp+ct==i)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
