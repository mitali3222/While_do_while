#include<stdio.h>

main()
{
	int n,i=2000;
	printf("Enter Value:");
	scanf("%d",&n);
	do{
		if(i%4==0){
			printf("%d\n",i);
            i++;		
		}
		
	}while(i<=n);
}
