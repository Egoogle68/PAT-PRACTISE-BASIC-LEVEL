# include <stdio.h>
# include <ctype.h>

int main()
{
	int count[26]={0};
	char ch;
	int m,max;
	while((ch=getchar())!='\n')
	{
		if(isupper(ch))
			count[ch-'A']++;
		else if(islower(ch))
			count[ch-'a']++;
	}
	max=count[0];
	m=0;
	for(int i=1;i<26;i++)
		if(max<count[i])
		{
			max=count[i];
			m=i;
		}
	printf("%c %d", 'a'+m, max);
	return 0;
}