# include <stdio.h>
# include <string.h>
# include <math.h>
int main()
{
	char a[11], b[11];
	int an,bn,ai,bi;
	long sa,sb;
	ai=bi=sa=sb=0;
	scanf("%s %d %s %d", a, &an, b, &bn);
	for(int i;i<strlen(a);i++)
		if(an==a[i]-'0')
			ai++;
	for(int j;j<strlen(b);j++)
		if(bn==b[j]-'0')
			bi++;
	sa=((long)pow(10,ai)-1)/9*an;
	sb=((long)pow(10,bi)-1)/9*bn;
	printf("%ld\n", sa+sb);
	return 0;
}