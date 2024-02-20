#include<stdio.h>
void fib(int a,int b,int n){
	int c;
	if(n>0)
{
	c=a+b;
	printf("%d",c);
}                            
	a=b;
	b=c;
	fib(a,b,n-1);

}
int main(){
	 int a,b,c,n;
	 a=0;
	 b=1;
	 printf("Enter number of terms:");
	 scanf("%d",&n);
	 printf("\n fibonacci series is:");
	 printf("%d%d",a,b);
	 fib(a,b,n-2);
	
	
	return 0;
}
