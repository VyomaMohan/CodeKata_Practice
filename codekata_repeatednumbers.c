#include<stdio.h>

//repeated numbers in sorted order

main(){
	int n,i,j,itr,count,temp,flag=0;
	int arr[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
	//printf("\n");
	
	itr=0;
	while(itr<n){
		if(arr[itr]==arr[itr+1]&&itr+1<n){
			flag=1;
			printf("%d ",arr[itr]);
			count=0;
			for(j=itr+1;j<n;j++){
				if(arr[j]!=arr[itr])
				break;
				else
				count++;
			}
			itr=itr+count;
		}
		itr=itr+1;
	}
	
	if(flag==0)
		printf("unique");
	
}
