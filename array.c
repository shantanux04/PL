#include<stdio.h>
int main(){
	int num,i;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0 || num==1){
		printf("your number is not prime");
	}
	int flag=0;
	for(i=0;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag=1){
		printf("your number is not prime");
	}
	else{
		printf("your number is prime");
	}
	return 0;
}
