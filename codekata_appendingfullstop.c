#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char str[5000];
	int l=0;
	scanf("%[^\n]",str);
	//for(l=0;str[l];l++);
	//printf("%d",l);
	strcat(str,".");
	printf("%s",str);
}
