/*#include<stdio.h>
int main(){
	int a[80];
	int n;
	int i,j,k;
	int *p;
	scanf("%d",&n);
	int m=n;
	for(i=0;i<n;i++){
		a[i]=i+1;}
		for(i=0,j=1,p=a+i;m>1;i++){
			if(p==a+(m-1))
			{i=0;p=a+i;n--;j++;}
			if(j<3){j++;p++;}
			else 
			{a[i]=0;j=1;}
			}
		for(i=0;i<n;i++){
			if(a[i]!=0)
				printf("%d",a[i]);}
			return 0;
		}*/


#include<stdio.h>
#define N 5
int main(){
	int i,j,k,a[N+1],*p;
	for(i=0,p=a;p<=a+N;i++,p++)
		*p=i;    //1-N ���и�ֵ,���︳ֵ����0��N-1������Ҫע�⣬����Ķ��ǻ��ڴ˵�
	p=a+1;k=N;
	for(i=0,j=1;k!=1;j++){   //k!=1����˼��ֻʣ��1����
		if(p>(a+N)) p=a+1;  //����ѭ������
		if(*p!=0) i++;      //��һ����������+1
		if((i-3)==0) {
			*p=0;i=0;k--;}  //����3������һ�±�־,*p=0,ͬʱi=0,��ͷ��ʼ
		p++;}
	for(i=1;i<=N;i++)
		if(a[i]!=0)
			printf("The last number is %d\n",a[i]);
		return 0;
}



/*#include<stdio.h>
int main(){
	int a[80];
	int n;
	int i,m,k;
	i=k=m=0;
	scanf("%d",&n);
	int *p=a;
	for(i=0;i<n;i++){
		*(p+i)=i+1;}  //���
	while(m<n-1){     //���˳�������n-1��ʱ
		if(*(p+i)!=0)
			k++;
		if(k==3){
			*(p+i)=0;  //���˳�������Ϊ0
			k=0;
			m++;}
		i++;
		if(i==n)
			i=0;}   //���������i�ָ�Ϊ0
	for(p=a;p<a+n;p++){
		if(*p!=0)
			printf("%d",*p);}
	printf("%d",*p);
	return 0;}*/


/*#include <stdio.h>  
  
int main(void) {  
    int n;// ������  
    int m;// ����ȥ���˵��Ǹ���  
    int remain;// ʣ������  
  
    int a[100]; // ����������  
    int i;// ѭ����ʱ����  
  
    // ��������������ʼ������  
    printf("input the number of people:");  
    scanf("%d",&n);  
    for(i=0; i<n; i++)  
        a[i]=i+1;  
  
    // ���������  
    printf("the index of people:  /n");  
    for(i=0; i<n; i++)  
        printf("%5d",a[i]);  
    printf("/n/n");  
  
    // ����Ҫɾ�������ֺ���  
    printf("input the number you want to delete:");  
    scanf("%d", &m);  
    printf("/n");  
  
    // ����ɾ��������ӡɾ������  
    remain=n;  
    int count=0;// ���μ���  
    printf("the sequence to delete people:  /n");  
    while(remain>1) {  
        for(i=0; i<n; i++) {  
            if(a[i]!=0) {  
                count++;  
                if(count == m) {  
                    printf("%5d",a[i]);// ��ӡ��ɾ������  
                    a[i]=0;   //����Ϊm�ı�Ϊ0��������ʱ�����0  
                    count=0;  
                    remain--;  
                }  
            }  
        }  
    }  
    printf("/n/n");  
      
    // ��ӡ���ʣ�µ���  
    for(i=0; i<n; i++) {  
        if(a[i]!=0) {  
            printf("the last people:   %d/n",a[i]);  
        }  
    }  
    return 0;  
	}*/
