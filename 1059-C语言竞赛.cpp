# include<stdio.h>
# include<stdlib.h>

char judge(int n);
int main()
{
    int n,k,temp;
    int i,j;
    scanf("%d", &n);
    int *list=(int *)malloc(n*sizeof(int));
    char *prize=(char *)malloc(n*sizeof(char));
    for(i=0;i<n;i++)
    {
        scanf("%d", &list[i]);
        prize[i]=judge(i+1);
    }
    scanf("%d", &k);
    for(i=0;i<k;i++)
    {
        scanf("%d", &temp);
        for(j=0;j<n;j++)
            if(list[j]==temp)
            {
                switch(prize[j]){
                    case '0':printf("%04d: Mystery Award\n", temp);break;
                    case '1':printf("%04d: Minion\n", temp);break;
                    case '2':printf("%04d: Chocolate\n", temp);break;
                    default :printf("%04d: Checked\n", temp);break;
                }
                prize[j]='3';
				break;
            }
        if(j==n)
            printf("%04d: Are you kidding?\n", temp);
    }
    return 0;
}

char judge(int n)
{
    int i;
    if(n==1)
        return '0';
    if(n==2)
        return '1';
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            break;
    if(i*i>n)
        return '1';
    else
        return '2';
}
