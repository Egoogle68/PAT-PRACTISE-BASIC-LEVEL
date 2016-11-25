# include <stdio.h>

void transfer(int n);

int main()
{
	int sum=0;
	char ch;
	ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		sum+=ch-'0';
		ch=getchar();
	}
	transfer(sum);
	return 0;
}

void transfer(int n)
{
	char str[4];
	//***字符串与数字的转换***
	sprintf(str,"%d",n);
	//指针对输出的控制
	char *temp=str;
	while(*temp!='\0')
	{
		switch(*temp)
		{
		case '0': 
			printf("ling");
			break;
		case '1':
			printf("yi");
			break;
		case '2':
			printf("er");
			break;
		case '3':
			printf("san");
			break;
		case '4':
			printf("si");
			break;
		case '5':
			printf("wu");
			break;
		case '6':
			printf("liu");
			break;
		case '7':
			printf("qi");
			break;
		case '8':
			printf("ba");
			break;
		case '9':
			printf("jiu");
			break;
		default:
			break;
		}
		temp++;
		if(*temp!='\0')
			printf(" ");
		else
			printf("\n");
	}
	
}