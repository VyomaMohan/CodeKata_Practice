//to swap even and odd positions of characters
#include<stdio.h>

main(){
	//change the size for string allocation as required
	char str[1000000];
	char temp;
	int limit,len=0,itr;
	
	scanf("%s",str);
	
	for(len=0;str[len];len++);
	
	if(len%2==0)
	limit=len;
	else
	limit=len-1;
	
	for(itr=0;itr<limit;itr=itr+2){
		temp=str[itr];
		str[itr]=str[itr+1];
		str[itr+1]=temp;
	}
	printf("%s",str);
}
