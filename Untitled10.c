#include<stdio.h>

main()
{
	int i=1,n;
	printf("Enter Number for multiplication table =");
	scanf("%d",&n);
	do{
		printf("%d * %d = %d\n",n,i,n*i);
	}while(i<=10);
}
