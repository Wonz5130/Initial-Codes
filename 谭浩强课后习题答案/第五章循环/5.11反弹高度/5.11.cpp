#include<stdio.h>
int main()
{
	int i;
	double h=100,s;
	s=100;
	for(i=2;i<=10;i++)
	{
		h/=2;
		s+=h*2;
	}
	printf("�����������ף�%f\n��10�η����߶ȣ�%f\n",s,h/2);
	return 0;
}
