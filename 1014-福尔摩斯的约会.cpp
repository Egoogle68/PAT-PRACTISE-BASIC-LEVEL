# include <stdio.h>
# include <string.h>
# include <ctype.h>

int min(char *a, char *b)
{
	if(strlen(a)<strlen(b))
		return strlen(a);
	else
		return strlen(b);
}

int main()
{
	int i,j;
	int n1,n2,n3;
	char s1[61],s2[61],s3[61],s4[61];
	char week[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char c1,c2;
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);
	scanf("%s", s4);
	for(i=0;i<min(s1,s2);i++)
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G')
		{
			c1=s1[i];
			break;
		}
	for(j=i+1;j<min(s1,s2);j++)
		if(s1[j]==s2[j]&&((s1[j]>='A'&&s1[j]<='N')||isdigit(s1[j])))
		{
			c2=s1[j];
			break;
		}
	for(i=0;i<min(s3,s4);i++)
		if(s3[i]==s4[i]&&isalpha(s3[i]))
		{
			n3=i;
			break;
		}
	n1=c1-'A';
	if(isupper(c2))
		n2=c2-'A'+10;
	else
		n2=c2-'0';
	printf("%s %02d:%02d\n", week[n1], n2, n3);
	return 0;
}