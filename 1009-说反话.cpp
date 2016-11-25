# include <stdio.h>
# include <string.h>

int main()
{
	int i,j,k;
	char str[81], s[41][81];
	gets(str);
	j=k=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			s[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			s[j][k]=str[i];
			k++;
		}
	}
	s[j][k]='\0';
	for(i=j;i>0;i--)
		printf("%s ", s[i]);
	printf("%s\n", s[0]);
	return 0;
}