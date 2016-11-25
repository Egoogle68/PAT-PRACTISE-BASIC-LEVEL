# include <stdio.h>
# include <string.h>

int main()
{
	char str[100001];
	gets(str);
	long nT,nAT,nPAT;
	nT=nAT=nPAT=0;
	for(int i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]=='T')
			nT++;
		else if(str[i]=='A')
			nAT=(nAT+nT)%1000000007;
		else if(str[i]=='P')
			nPAT=(nPAT+nAT)%1000000007;
	}
	printf("%ld", nPAT);
	return 0;
}
