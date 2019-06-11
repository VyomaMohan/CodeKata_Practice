#include<stdio.h>
main(){
	char str[10000];
	char alp[26];
	char ch;
	int flag=0;
	int i,len;
	scanf("%[^\n]",str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++){
		if((str[i]>=97&&str[i]<=122)||(str[i]>=65&&str[i]<=90)){
			ch=tolower(str[i]);
			alp[ch-97]=1;
		}
	}
	
	
	//for(i=0;i<26;i++)
	//printf("%d ",alp[i]);
	
	for(i=0;i<26;i++)
	{
		if(alp[i]==0)
		flag=1;
	}
	if(flag==0)
	printf("yes");
	else
	printf("no");
	
}
