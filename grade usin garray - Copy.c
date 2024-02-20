#include<stdio.h>
int main()
{
	int i,a[5];
	float sum, avg;
	printf("Enter the Marks of 5 Subjects: ");
	for( i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	avg=sum/5;
	printf(" your Grade is: ");
	if(avg>=91 && avg<=100)
        printf("O");
    else if(avg>=81 && avg<91)
        printf("A+");
    else if(avg>=71 && avg<81)
        printf("A");
    else if(avg>=61 && avg<71)
        printf("B+");
    else if(avg>=51 && avg<61)
        printf("B");
    else if(avg>=41 && avg<51)
        printf("C");
    else
	printf("Failed");
  return 0;
}
