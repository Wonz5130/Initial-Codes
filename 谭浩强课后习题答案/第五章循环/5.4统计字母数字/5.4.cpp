#include<stdio.h>
int main()
{
	int n=0,m=0,space=0,ch=0;
	char c;
    while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		n++;
		else if(c>='0'&&c<='9')
			m++;
		else if(c==' ')
			space++;
		else ch++;
	}
	printf("Ӣ����ĸ��%d\n���֣�%d\n�ո�%d\n�ַ���%d\n",n,m,space,ch);
	return 0;
}