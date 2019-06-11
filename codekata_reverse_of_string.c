#include<stdio.h>
#include<string.h>
main(){
	char str[1000000];
	int itr,len;
	scanf("%[^\n]",str);
	len=strlen(str);
	for(itr=len-1;itr>=0;itr--)
	printf("%c",str[itr]);
	
}
