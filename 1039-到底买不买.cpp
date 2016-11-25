# include <stdio.h>
# include <ctype.h>

int main()
{
	int count[62]={0};
	char ch;
	int flag=0;
	int n=0;
	while((ch=getchar())!='\n')
	{
		if(isdigit(ch))
			count[ch-'0']++;
		else if(isupper(ch))
			count[ch-'A'+10]++;
		else
			count[ch-'a'+36]++;
	}
	while((ch=getchar())!='\n')
	{
		if(isdigit(ch))
		{
			if(count[ch-'0'])
				count[ch-'0']--;
			else
				flag++;
		}
		else if(isupper(ch))
		{
			if(count[ch-'A'+10])
				count[ch-'A'+10]--;
			else
				flag++;
		}
		else
		{
			if(count[ch-'a'+36])
				count[ch-'a'+36]--;
			else
				flag++;
		}
	}
	if(flag==0)
	{
		for(int i=0;i<62;i++)
			n+=count[i];
		printf("Yes %d", n);
	}
	else
		printf("No %d", flag);
	return 0;
}