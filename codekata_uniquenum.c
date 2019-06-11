#include<stdio.h>
main(){
	int n,i,num,uniq=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		uniq=uniq^num;
	}
	printf("%d",uniq);
}
