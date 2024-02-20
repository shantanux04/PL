#include<stdio.h>
int main(){
	int a,i;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a>0){
		i=(a%10);
		printf("%d",i);
		a=a/10;
	}
	return 0;
} 
