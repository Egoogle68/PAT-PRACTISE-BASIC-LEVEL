# include <stdio.h>

long factor(long x, long y)
{
	long z;
	if(x<y)
	{
		z=x;
		x=y;
		y=z;
	}
	while(y>0)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return x;
}

void print_format(long a, long b, char *s)
{
	int f;
	if(a<0)
	{
		f=-1;
		a=-1*a;
	}
	else
		f=1;

	if(a%b==0)
	{
		if(a==0)
			sprintf(s,"0");
		else
		{
			if(f==1)
				sprintf(s,"%ld",a/b);
			else
				sprintf(s,"(-%ld)",a/b);
		}
	}
	else
	{
		long t;
		t=factor(a,b);
		a/=t;
		b/=t;
		if(a/b==0)
		{
			if(f==1)
				sprintf(s,"%ld/%ld",a,b);
			else
				sprintf(s,"(-%ld/%ld)",a,b);
		}
		else
		{	
			if(f==1)
				sprintf(s,"%ld %ld/%ld",a/b,a-a/b*b,b);
			else
				sprintf(s,"(-%ld %ld/%ld)",a/b,a-a/b*b,b);
		}
	}
}

int main()
{
	char s1[30],s2[30],s3[30],s4[30],s5[30],s6[30];
	long a,b,c,d;
	int f1,f2;
	long t;
	long x1,x2,x3,x4,y1,y2,y3,y4;
	f1=f2=1;
	scanf("%ld/%ld %ld/%ld", &a, &b, &c, &d);

	if(a<0)
    {
        f1=-1;
        a=-1*a;
    }
	if(c<0)
    {
        f2=-1;
        c=-1*c;
    }

	t=factor(a,b);
	a/=t;
	b/=t;
	print_format(a*f1,b,s1);
	print_format(c*f2,d,s2);
	
	x1=f1*a*d+f2*b*c;
	x2=f1*a*d-f2*b*c;
	y1=y2=b*d;
	print_format(x1,y1,s3);
	print_format(x2,y2,s4);
	printf("%s + %s = %s\n", s1, s2, s3);
	printf("%s - %s = %s\n", s1, s2, s4);

	x3=a*c*f1*f2;
	y3=b*d;
	print_format(x3,y3,s5);
	printf("%s * %s = %s\n", s1, s2, s5);

	if(c==0)
		printf("%s / %s = Inf\n", s1, s2);
	else
	{
		x4=a*d*f1*f2;
		y4=b*c;
		print_format(x4,y4,s6);
		printf("%s / %s = %s\n", s1, s2, s6);
	}
	return 0;
}