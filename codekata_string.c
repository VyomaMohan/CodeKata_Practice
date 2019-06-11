#include<stdio.h>
main(){
	char str1[1000];
	char str2[1000];
	int num1,num2,sum,len,i;
	scanf("%s%s",str1,str2);
	
	for(len=0;str1[len];len++);
	
	for(i=0;i<len;i++){
		num1=tolower(str1[i]);
		num2=tolower(str2[i]);
		num1=num1-97;
		num2=num2-97;
		sum=(num1+num2)%26;
		sum=sum+97;
		str1[i]=sum+1;
	}
	
	printf("%s",str1);
	
}
