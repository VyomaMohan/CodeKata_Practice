#include<stdio.h>
main(){
	int i,n;
	int arr[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++){
		if(arr[i]%2!=i%2)
		printf("%d ",arr[i]);
	}
}
