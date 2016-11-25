# include <stdio.h>
# include <ctype.h>

int main()
{
	char s[19];
	int t[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char c[11]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	int flag=0;
	int i,n,k,sum;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", s);
		for(k=0;k<17;k++)
			if(!isdigit(s[k]))
			{
				printf("%s\n", s);
				flag=1;
				break;
			}
		if(k==17)
		{
			sum=0;
			for(k=0;k<17;k++)
				sum+=(s[k]-'0')*t[k];
			if(c[sum%11]!=s[17])
			{
				printf("%s\n", s);
				flag=1;
			}
		}
	}
	if(flag==0)
		printf("All passed\n");
	return 0;
}