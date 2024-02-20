#include<stdio.h>
union employee{
	char name[32];
	int desi[32];
	int bpay;
};
union employee u;
int main()
{
	printf("Enter your name:");
	scanf("%s",& u.name);
	printf("Enter your designation:");
	scanf("%s",& u.desi);
	printf("Enter your basic pay:");
	scanf("%s",& u.bpay);
	float TA,DA,total=0;
	TA= u.bpay/20;
	printf("\n %d",TA);
	DA= u.bpay/50;
	printf("\n %d",DA);
	total=TA + DA + u.bpay;
	printf("\n your gross salary is %f",total);
	printf(sizeof(u.employee));
	return 0;
	
}
