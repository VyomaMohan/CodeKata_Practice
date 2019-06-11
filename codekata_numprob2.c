#include<stdio.h>
main(){
	int n,k;
	int arr[100000];
	int flag=0;
	int i,j;
	
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]+arr[j]==k){
				flag=1;
			}
		}
	}
	
	
	if(flag==1)
	printf("yes");
	else
	printf("no");	
}
