#include <stdio.h>

int main(){
//	���Լ������С������
    int a,b,c,m,t;
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	m=a*b;
	c=a%b;
	while(c!=0){
		a=b;
		b=c;
		c=a%b;
	}
	printf("���Լ��Ϊ��%d\n",b);
	printf("��С������Ϊ��%d\n",m/b);
	return 0;
}

int main(){
//  ��С������
	int a,b,t,s,i=1;
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;a=b;b=t;
	}
	s=a*i;
	while(s%b!=0){
		i++;
		s=a*i;
	}
	printf("%d",s);
}

