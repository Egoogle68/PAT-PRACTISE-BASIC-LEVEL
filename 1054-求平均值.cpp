# include <stdio.h>
# include <ctype.h>

int main()
{
	int i,j,n,k=0,flag;
	int n1;
	double temp, sum=0;
	char s[10];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		temp=0;
		n1=j=0;
		flag=1;
		scanf("%s", s);
		if(s[0]=='-')
		{
			if(s[1]=='.'||s[1]=='\0')
			{
				printf("ERROR: %s is not a legal number\n", s);
				continue;
			}
			flag=-1;
			j++;
		}
		else if(!isdigit(s[0]))
		{
			printf("ERROR: %s is not a legal number\n", s);
			continue;
		}
		while(s[j]!='\0')
		{
			if(s[j]=='.'&&n1==0)
				n1=1;
			else if(isdigit(s[j]))
			{
				if(n1==0)
					temp=temp*10+s[j]-'0';
				else if(n1==1)
				{
					temp+=(double)(s[j]-'0')/10;
					n1++;
				}
				else if(n1==2)
				{
					temp+=(double)(s[j]-'0')/100;
					n1++;
				}
				else
				{
					flag=0;
					break;
				}
			}
			else
			{
				flag=0;
				break;
			}
			j++;
		}
		if(flag&&temp<=1000)
		{
			sum+=temp*flag;
			k++;
		}
		else
			printf("ERROR: %s is not a legal number\n", s);
	}
	if(k>1)
		printf("The average of %d numbers is %.2lf\n", k, sum/k);
	else if(k==1)
		printf("The average of 1 number is %.2lf\n", sum);
	else
		printf("The average of 0 numbers is Undefined\n");
	return 0;
}