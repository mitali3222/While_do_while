#include<stdio.h>

main()
{
	int n,sum=0;
	int i=1;
	printf("enter any numur:");
	scanf("%i",&n);
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	printf("sum=%i",sum);
	
 }
