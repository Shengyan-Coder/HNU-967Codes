#include <stdio.h>

int main(){
//    �ж�ˮ�ɻ�������ķ˹��������
	int i,j,k,n;
	for(i=100;i<1000;i++){
		j=i%10;
		k=i/10%10;
		n=i/100;
		if(j*j*j+k*k*k+n*n*n==i)
			printf("%d\n",i);
	}
	return 0;
}

