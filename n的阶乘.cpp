#include <stdio.h>

int main(){
//	��n�Ľ׳�
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++) sum*=i;
	printf("%lf\n",sum);
	return 0;
}

