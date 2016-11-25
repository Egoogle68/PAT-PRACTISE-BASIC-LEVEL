# include<stdio.h>

int main()
{
    int n,t,sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &t);
        sum+=t;
    }
    printf("%d\n", sum*11*(n-1));
    return 0;
} 
