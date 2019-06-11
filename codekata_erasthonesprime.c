#include<stdio.h>
main(){
	int arr[100000];
	int low,high,limit,count=0,i,j,num,increment;
	scanf("%d%d",&low,&high);
	
	limit=high-low+1;
	
	//if(low==1)
	arr[0]=1;
	arr[1]=1;
	
	for(i=2;i<=high;i++){
		num=i;
		increment=num;
		if(arr[i]==0){
			num=num+num;
			while(num<=high){
				arr[num]=1;
				num=num+increment;
			}
		}
	}
	
	for(i=low;i<=high;i++){
		if(arr[i]==0){
			count++;
		}
	}
	
	//for(i=0;i<limit;i++)
	//printf("%d:%d ",low+i,arr[i]);
	//printf("\n");
	
	printf("%d",count);
}
