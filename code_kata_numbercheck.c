#include<stdio.h>
#include<stdlib.h>
main(){
	int n;
	scanf("%d",&n);
	if(n>0)
	printf("Positive");
	else if(n<0)
	printf("Negative");
	else if(n==0)
	printf("Zero");
	else
	printf("Not a number");	
}
