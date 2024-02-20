#include<stdio.h>
int main()
{
	int num,i,j,b;
	char name[50];
	int sub1[50];
	int sub2[50];
	int sub3[50];
	int sub4[50];
	int sub5[50];
	printf("Enter a number of student in class:");
	scanf("%d",&num);
	for(i=0;i<num;i++);
	{
	printf("Enter your name:");
	scanf("%s",name);
	printf("Enter your marks of first subject:");
	scanf("%d",& sub1[i]);
	printf("Enter your marks of second subject:");
	scanf("%d",& sub2[i]);
	printf("Enter your marks of third subject:");
	scanf("%d",& sub3[i]);
	printf("Enter your marks of fourth subject:");
	scanf("%d",& sub4[i]);
	printf("Enter your marks of fifth subject:");
	scanf("%d",& sub5[i]);
	}
		int flag=0;
	for(j=0;j<num;j++)
	{
		if(sub1[j]<40 || sub2[j]<40 || sub3[j] || sub4[j] || sub5[j])
		{
			printf("you are failed");
		}
		else
		{
		 	printf("you are passed");	
		 	flag=1;
		}
		
		 
	}
	int pass=0;
	int fail=0;
	for(b=0;b<num;b++){
	
		if(flag=1)
		{
			pass++;
		}
		else
		{
			fail++;
		}
	}
	printf("total number of passing students are:%d",pass);
	printf("Total number of failing students are%d",fail);
	
	
	
	
	return 0;
}
