#include<stdio.h>
#include<math.h>
int main()
{
	void yes(int);
	int x;
	scanf("%d",&x);
	yes(x);
	return 0;
}
void yes(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{ if(x%i==0)
	{printf("��������\n");
	break;}
	else continue;}
	if(i>sqrt(x))
		printf("������\n");
}
