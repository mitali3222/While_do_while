#include<stdio.h>

main()
{
	int i = 1,n,fact=1;
	printf("Enter Size =");
	scanf("%d",&n);
	while(i<=n)
	{
		fact = fact*i;
		i++;
		
	}
    printf("Factorial of 1 to N = %d",fact);
    
    
    
}
