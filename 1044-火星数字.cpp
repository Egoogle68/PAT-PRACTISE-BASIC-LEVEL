# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main()
{
	char a[12][4]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	char b[12][4]={"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	char c[5]="tret";
	int i,j,n,s;
	char t[9];
	scanf("%d", &n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(t);
		if(isdigit(t[0]))
		{
			s=0;
			for(j=0;j<=strlen(t)-1;j++)
				s=s*10+t[j]-'0';
			if(s/13)
			{
				if(s%13)
					printf("%s ", a[s/13-1]);
				else
					printf("%s\n", a[s/13-1]);
			}
			if(s%13)
				printf("%s\n", b[s%13-1]);
			if(s==0)
				printf("%s\n", c);
		}
		else
		{
			s=0;
			for(j=0;j<12;j++)
				if(strncmp(a[j],t,3)==0)
				{
					s+=13*(j+1);
					break;
				}
			if(strlen(t)==3&&j<12)
				;
			else
				{
					int tt=0;
					if(j<12)
						tt=4;
					for(j=0;j<12;j++)
						if(strncmp(b[j],t+tt,3)==0)
						{
							s+=j+1;
							break;
						}
				}
			printf("%d\n", s);
		}
	}
	return 0;
}