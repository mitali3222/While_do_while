#include<stdio.h>

main()
{
	int i =10,n;
	printf("Enter Value :");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i--;
	}while(i>=n);
}
