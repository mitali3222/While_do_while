#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	printf("Enter Size =");
	scanf("%d",n);
	do{
		fact = fact*i;
		i++;
	}while(i<n);
	printf("Factorial of 1 to n =%d",fact);
	
}
