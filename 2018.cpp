#include <stdio.h>�������� //�������룯�������
#include <math.h>


// 18�� ��Ŀ1 ��ֵ����pow�ݺ���
int main(){
	int i,n;
	float a,s;
	scanf("%d %f",&n,&a);
	for(i=1;i<=n;i++){
		s+=pow(a,i);
    }
    printf("%f\n",s);
	return 0;
}


// ����Ҫ��18�� ��Ŀ2 ��һ��ĵڼ���
int main(){
	int year,month,date,leap,days=0;
	printf("��������ݣ�");
	scanf("%d",&year);
	printf("�������·ݣ�");
	scanf("%d",&month);
	printf("�������գ�");
	scanf("%d",&date);
	leap=(year%4==0&&year%100!=0||year%400==0);
	switch(month){
		case 12: days+=30; case 11: days+=31;
		case 10: days+=30; case  9: days+=31;
		case  8: days+=31; case  7: days+=30;
		case  6: days+=31; case  5: days+=30;
		case  4: days+=31; case  3: days+=28+leap;
		case  2: days+=31; case  1: days+=date;break;
		default: printf("data error");break;
	}
	printf("%4d��%2d��%2d������һ��ĵ�%d�졣\n", year,month,date,days);
	return 0;
}


//  18�� ��Ŀ3 ���������������������
int isPrime(int x){
	int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0) return 0;
	return 1;
}

int main(){
	int i,s=0;
	for(i=101;i<=200;i++)
		if(isPrime(i)){
			printf("%d ",i);
			s++;
		}
	printf("\n");
	printf("101-200֮�����������Ϊ%2d��\n",s);
	return 0;
}


// 18�� ��Ŀ4 ���� β�����
#define N 10
void insert(int a[],int n,int x){
	int i,j,t;
	//BubbleSort
	for(j=1;j<n;j++)
	   for(i=0;i<n-j;i++)
		   if(a[i]>a[i+1]){
			   t=a[i]; a[i]=a[i+1]; a[i+1]=t;
		   }
	//����x
	for(i=0;i<n;i++) if(x<=a[i]) break;
	for(j=n;j>i;j--) a[j]=a[j-1];
	a[i]=x;
}

int main(){
	int a[N],x,n,i;
	printf("����������Ԫ�ظ�����");
	scanf("%d",&n);
	printf("�����������Ԫ��x��");
	scanf("%d",&x);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	insert(a,n,x);
	for(i=0;i<=n;i++) printf("%d ",a[i]);
	return 0;
}


// 18�� ��Ŀ5 ���ֵ����Сֵ��ƽ��ֵ
int main(){
	int a[10],i,max,min;
	float average,sum;
	for(i=0;i<10;i++) scanf("%d",&a[i]);
	max=min=sum=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		sum+=a[i];
	}
	average=sum/10;
	printf("���ֵ��%d, ��Сֵ��%d, ƽ��ֵ��%f\n",max,min,average);
}
