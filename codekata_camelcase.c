#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//program converts string to camel case i.e, start of all letters will be capital

main(){
	
	char str[1000000];
	int len=0,itr;
	
	scanf("%[^\n]",str);
	
	for(len=0;str[len];len++);
	
	str[0]=toupper(str[0]);
	
	for(itr=1;itr<len;itr++){
		if(str[itr-1]==32){
			str[itr]=toupper(str[itr]);
		}
	}
	
	printf("%s",str);
	
}
