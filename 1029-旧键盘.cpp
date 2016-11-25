# include <stdio.h>
# include <ctype.h>
# include <string.h>

int main()
{
	char a[81], b[80], c[81]={'\0'};
	int i,j,k,t;
	scanf("%s %s", a, b);
	for(i=0;i<strlen(a);i++)
		if(islower(a[i]))
			a[i]=toupper(a[i]);
	for(i=0;i<strlen(b);i++)
		if(islower(b[i]))
			b[i]=toupper(b[i]);
	i=j=k=0;
	while(i<strlen(a))
	{
		if(a[i]==b[j])
			j++;
		else
		{
			t=0;
			while(t<k)
				if(a[i]!=c[t])
					t++;
				else
					break;
			if(t==k)
			{
				c[k]=a[i];
				k++;
			}
		}
		i++;
	}
	printf("%s\n", c);
	return 0;
}