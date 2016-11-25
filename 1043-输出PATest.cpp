# include <stdio.h>

int main()
{
	int s[6]={0};
	int max, min;
	int i,j;
	char ch;
	while((ch=getchar())!='\n')
	{
		switch(ch)
		{
		case 'P': s[0]++; break;
		case 'A': s[1]++; break;
		case 'T': s[2]++; break;
		case 'e': s[3]++; break;
		case 's': s[4]++; break;
		case 't': s[5]++; break;
		default : break;
		}
	}
	max=min=s[0];
	for(i=1;i<6;i++)
		if(s[i]>max)
			max=s[i];
		else if(s[i]<min)
			min=s[i];
	for(i=0;i<6;i++)
		s[i]-=min;
	for(j=1;j<=min;j++)
		printf("PATest");
	j=max-min;
	while(j>0)
	{
		if(s[0])
		{
			putchar('P');
			s[0]--;
		}
		if(s[1])
		{
			putchar('A');
			s[1]--;
		}
		if(s[2])
		{
			putchar('T');
			s[2]--;
		}
		if(s[3])
		{
			putchar('e');
			s[3]--;
		}
		if(s[4])
		{
			putchar('s');
			s[4]--;
		}
		if(s[5])
		{
			putchar('t');
			s[5]--;
		}
		j--;
	}
	putchar('\n');
	return 0;
}