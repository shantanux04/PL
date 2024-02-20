int main()
{
	int arr[10],n,i,j;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int greaternum=0;
	for(j=0;j<n;j++){
		if(greaternum<arr[j]){
			greaternum=arr[j];
		}
		printf("%d",greaternum);
	}
	return 0;
}
