# include <stdio.h>

int main()
{
	long a,b,c;
	int h,m,s;
	scanf("%ld %ld", &a, &b);
	c=(b-a+50)/100;
	s=(int)(c%60);
	m=(int)(c%3600/60);
	h=(int)(c/3600);
	printf("%02d:%02d:%02d\n",h,m,s);
	return 0;
}