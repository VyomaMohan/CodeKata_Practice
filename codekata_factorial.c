#include<stdio.h>

//factorial for number less than or equal to 20

main(){
	long long int n;
	long long int fact,itr;
	scanf("%lld",&n);
	if(n==1||n==0)
	printf("1");
	else if(n<=20){
		fact=1;
		for(itr=2;itr<=n;itr++)
		fact=fact*itr;
		
		printf("%lld",fact);
	}
	else{
		printf("invalid");
	}
}
