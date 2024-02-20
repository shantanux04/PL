#include<stdio.h>
int main(){
	int a,i=0;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a>0){
		a=a/10;
		i++;
	}
	printf("The number digit you have entered are %d",i);	
	return 0;
}
