/*#include<stdio.h>
#include<string.h>
int main()
{
	void longest(char str[100]);
	char str[100];
	gets(str);
	longest(str);
	return 0;
}
void longest(char str[100])
{
	int i,m,n,flag;
	m=n=flag=0;
	for(i=0;i<strlen(str);i++)
	{ if(str[i]!='\0')
	{m++;}
	else if(m>n)
	{n=m;}
	m=0;
	}
	for(i=0;i<n;i++)
	{printf("%c",str[i]);}
}*/


#include <stdio.h>
#include <string.h>
int main()
{
	int word(char c);
    int longest(char str[]);
    int i;
    char str[80];
    printf("����һ���ַ���\n\n");
    gets(str);
    printf("\n\n��ĵ���Ϊ��\n\n");
    for(i=longest(str);word(str[i]);i++)
    printf("%c",str[i]);
    printf("\n");
    return 0;
}

//�����ж��ַ��Ƿ���Ӣ���ֽ�
int word(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) return 1;
    else return 0;
}

int longest(char str[]) 
{
	int i,flag=1,len=0,point,max_len=0,max_point;
    //�����ַ�
    for(i=0;i<=strlen(str);i++)
	{
     //�ж��Ƿ�ΪӢ��
     if(word(str[i])) 
	 {
		 if(flag==1) 
		 {
         //���ʵ�һ���ҵ���ı��־
         point=i; 
         flag=0;
		 }
       else len++; //��ʼ��������ʳ��Ƚ����ۼ�
	 }
	 else //��Ӣ����ĸ
	 {
//�ȴ���һ��Ӣ����ĸ�ĳ��֣�����flag=1��Ҫ����һ����Ӣ����ĸ�Ļ�����ִ�������if��
		 flag=1; 
//֮ǰ�ۼӵĵ��ʳ����Ƿ����һ�����ʸ�������һ�εĻ�max_len��ʼ��Ϊ0��len�ش���max_len��
		 if(len>max_len)
		 {
//�����ʳ��ȱ�������
			 max_len=len;
//������ʵĵ�һ��Ӣ����ĸ���ַ����е�λ�ñ�������
			 max_point=point;
		 }
		 len=0;
	 }
	}
	return (max_point);
}
