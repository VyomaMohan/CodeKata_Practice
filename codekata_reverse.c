#include<stdio.h>
//reverse of positive number
main(){
	int n;
	int sum,r;
	scanf("%d",&n);
	if(n>0){
		sum=0;
		while(n>0){
			r=n%10;
			sum=(sum*10)+r;
			n=n/10;
		}
		printf("%d",sum);
	}
	else{
		printf("invalid");
	}
}
