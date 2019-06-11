#include<stdio.h>

//roman number less than 20 to integer

main(){
	char str[20];
	int sum=0,l=0,itr;
	scanf("%s",str);
	for(l=0;str[l];l++);
	for(itr=0;itr<l;itr++){
		if(str[itr]=='X'){
			if(itr-1>=0&&str[itr-1]=='I'){
				sum=sum-1;
				sum=sum+9;
			}
			else{
				sum=sum+10;
			}
		}
		else if(str[itr]=='V'){
			if(itr-1>=0&&str[itr-1]=='I'){
				sum=sum-1;
				sum=sum+4;
			}
			else{
				sum=sum+5;
			}
		}
		else if(str[itr]=='I')
		sum=sum+1;
	}
	printf("%d",sum);
}
