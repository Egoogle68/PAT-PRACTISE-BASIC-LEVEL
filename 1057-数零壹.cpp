# include<stdio.h>

int main()
{
    int sum;
    char c;
    int n0,n1;
    n0=n1=0;
    while((c=getchar())!='\n')
        if(c>='a'&&c<='z')
            sum+=c-'a'+1;
        else if(c>='A'&&c<='Z')
            sum+=c-'A'+1;
        else
            continue;
    while(sum)
    {
        if(sum%2)
            n1++;
        else
            n0++;
        sum/=2;
    }
    printf("%d %d\n", n0, n1);
    return 0;
}
