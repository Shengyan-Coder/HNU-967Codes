#include <stdio.h>

int main(){
	int year,flag=0;
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0) flag=1;
	if(flag) printf("%d ����������\n",year);
	else printf("%d ���겻������\n",year);
	return 0;
}

