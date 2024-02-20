#include<stdio.h>
int main()
{
	int i,j;
	int a[5];
	printf("Enter the 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}
