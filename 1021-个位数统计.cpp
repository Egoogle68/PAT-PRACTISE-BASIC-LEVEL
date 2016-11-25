# include <stdio.h>
# include <string.h>

int main()
{
	char s[1001];
	int i;
	int count[10]={0};
	scanf("%s", s);
	for(i=0;i<strlen(s);i++)
		count[s[i]-'0']++;
	for(i=0;i<10;i++)
		if(count[i])
			printf("%d:%d\n", i,count[i]);
	return 0;
}