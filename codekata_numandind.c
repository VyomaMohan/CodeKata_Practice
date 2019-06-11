#include<stdio.h>
main(){
	int arr[100000];
	int res[50000];
	int ind=0,i,j,n,flag=0,temp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]==i){
			res[ind]=arr[i];
			ind++;
			flag=1;
		}
	}
	
	/*for(i=0;i<ind;i++){
		for(j=i+1;j<ind;j++){
			if(res[i]>res[j]){
				temp=res[i];
				res[i]=res[j];
				res[j]=temp;
			}
		}
	}*/
	
	for(i=0;i<ind;i++)
	printf("%d ",res[i]);
	
	if(flag==0)
	printf("-1");
	
}
