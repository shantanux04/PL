#include<stdio.h>
int main(){
	int a,b,c,d,e,num;
	printf("Enter a marks of first subject:");
	scanf("%d",&a);
	printf("Enter a marks of second subject:");
	scanf("%d",&b);
	printf("Enter a marks of third subject:");
	scanf("%d",&c);
	printf("Enter a marks of fourth subject:");
	scanf("%d",&d);
	printf("Enter a marks of fifth subject:");
	scanf("%d",&e);
	int per=(a+b+c+d+e)/5;
	if(a<35 || b<35 || c<35 || d<35 || e<35)
	{
		printf("You are maybe failed in atleast one subject");
	}
	else
	{
		printf("You are passed\n");
		if(per>=75)
		{
			printf("you have distinction\n");	
		}
		else if(per<75 || per >=65)
		{
			printf("You have score first grade\n");
		}
		else if(per<65 || per>=55)
		{ 
			printf("you have score second grade\n");
		}
		else if(per<55 || per>=45)
		{
			printf("You have score third grade\n");
		}
		else
		{
			printf("you are failed...try again in next year");
		}
	}
	
	return 0;
}
