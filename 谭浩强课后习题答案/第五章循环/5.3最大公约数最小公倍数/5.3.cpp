#include<stdio.h>
int main()
{
	int m,n,t,r,m1,n1;
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	m1=m;n1=n;
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("���Լ����%d\n��С��������%d\n",m,m1*n1/m);
	return 0;
}


