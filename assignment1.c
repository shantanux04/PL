#include<stdio.h>
int main()
{
	int basic,HRA,TA,total,tax,net;
	printf("Enter your Basic pay: ");
	scanf("%d",&basic);
	HRA=10*basic/100;
	TA=5*basic/100;
	total=basic+HRA+TA;
	printf("Your Total Salary is %d \n ",total);
	tax=2*total/100;
	net=total-tax;
	printf("Your Net salary after tax deduction is %d ",net);
	return 0;
	
}
