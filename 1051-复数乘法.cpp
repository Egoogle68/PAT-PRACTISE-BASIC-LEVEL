# include <stdio.h>
# include <math.h>

int main()
{
	double r1,r2,p1,p2;
	double a,b;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
	a=(r1*cos(p1))*(r2*cos(p2))-(r1*sin(p1))*(r2*sin(p2));
	b=(r1*cos(p1))*(r2*sin(p2))+(r1*sin(p1))*(r2*cos(p2));
	if(fabs(a)<0.01)
		a=0;
	if(fabs(b)<0.01)
		b=0;
	printf("%.2lf%+.2lfi\n", a, b);
	return 0;
}