# include <stdio.h>
# include <string.h>

int main()
{
	char a[1001];
	int b;
	char q[1001];
	int r=0;
	char *t;
	scanf("%s %d", a, &b);

	for(int i=0;i<strlen(a);i++)
	{
		q[i]=(char)( (a[i]-'0'+r*10)/b+'0' );
		r=(a[i]-'0'+r*10)%b;
	}
	q[i]='\0';

	t=q;
	while(*t=='0')
		t++;
	printf("%s %d\n", t, r);
	return 0;
}